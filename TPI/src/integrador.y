%{ /* seccion de definiciones */

	#include <stdio.h>
	#include <math.h>
	#include <ctype.h>
	#include <stdlib.h>
	#include <string.h>
	#include "tablaDeSimbolos.h"
	#include "tablaDeSimbolos.c"
	#define YYERROR_VERBOSE

	extern FILE* yyin; 
	extern FILE* yyout;
	int my_line=1;
	
	// el mensaje muestre la línea en la que está el error

	int yylex();

	void yyerror (char const *s) {
		agregarErrorSintactico(s,my_line);
		//fprintf(stderr, "hay un error \n", s); 
	}

%}


%union{
	struct{
		char cadena[50];
		int tipo;// char=0,int=1, float=2, double=3, void=4 ,char*=5
		float numero;
	}s;
}

%token <s> FOR
%token <s> IF 
%token <s> ELSE 
%token <s> RETURN
%token <s> SWITCH 
%token <s> DECIMAL
%token <s> HEXA
%token <s> OCTAL
%token <s> NUM_R
%token <s> IDENTIFICADOR
%token <s> TIPO_DATO
%token <s> DO
%token <s> WHILE
%token <s> CHAR
%token <s> LITERAL_CADENA
%token <s> MAYOR_IGUAL
%token <s> MENOR_IGUAL
%token <s> IGUALDAD
%token <s> AND
%token <s> OR
%token <s> DESIGUALDAD
%token <s> CASE
%token <s> BREAK
%token <s> DEFAULT
%token <s> MAS_IGUAL
%token <s> MENOS_IGUAL
%token <s> POR_IGUAL
%token <s> DIVIDIDO_IGUAL
%token <s> MAS_MAS
%token <s> MENOS_MENOS
%token <s> error
%token <s> ERROR_LEXICO

%type <s> incrementoDecremento
%type <s> auxi
%type <s> expC
%type <s> identificadorA
%type <s> exp
%type <s> sentenciaDeclaracion
%type <s> listaParametrosPrototipo
%type <s> listaParametrosFuncion
%type <s> parametro
%type <s> listaIdentificadores
%type <s> sentenciaReturn
%type <s> listaParametrosInvocacionAuxiliar
%type <s> sentenciaAsignacionAuxiliar

%%



input:	/* vacio */
		| input line 
		| ERROR_LEXICO { agregarErrorLexico($<s.cadena>1);}
;

line:   '\n'    {my_line++;}     
		| listadoDeSentenciasDeDeclaracion saltoOpcional
		| invocacionFuncion saltoOpcional 
		| prototipoFuncion saltoOpcional
		| desarrolloFuncion saltoOpcional
		| sentenciaSwitch saltoOpcional
		| sentenciaWhile saltoOpcional
		| sentenciaFor saltoOpcional
		| sentenciaDoWhile saltoOpcional
		| sentenciaIfElse saltoOpcional
		| sentenciaAsignacion saltoOpcional
		| incrementoDecremento saltoOpcional
		| error saltoOpcional { yyerrok;}
;


saltoOpcional: 	/*  vacio */
				|  '\n' saltoOpcional {my_line++;}
;


invocacionFuncion: IDENTIFICADOR '(' listaParametrosInvocacion ')' ';'  {if(verificaFuncion($<s.cadena>1)){printf( "Se incovoco correcamente a la funcion %s \n",$<s.cadena>1);}}
;



listadoDeSentencias: /* vacio */ 
					| sentenciaSwitch listadoDeSentencias 
					| sentenciaDoWhile listadoDeSentencias
					| sentenciaFor listadoDeSentencias
					| sentenciaWhile listadoDeSentencias
					| sentenciaIfElse listadoDeSentencias
					| sentenciaAsignacion listadoDeSentencias
					| sentenciaReturn listadoDeSentencias
					| listadoDeSentenciasDeDeclaracion listadoDeSentencias
					| invocacionFuncion saltoOpcional
					| incrementoDecremento listadoDeSentencias
					| '\n' listadoDeSentencias {my_line++;} 
;
sentenciaDoWhile: DO saltoOpcional '{' listadoDeSentencias '}' WHILE '(' exp ')' ';' {printf( "Se ha declarado una sentencia do-while \n");}

;
sentenciaFor:	FOR  '(' sentenciaDecOAsig   sentenciaDecOAsig  incrementoParaFor ')' saltoOpcional '{' listadoDeSentencias '}'  {printf("Se ha declarado una sentencia for\n");}
;



sentenciaDecOAsig: sentenciaAsignacion 
				|  sentenciaDeclaracion 
;


incrementoParaFor: IDENTIFICADOR incrementoParaForAuxiliar 		 {if(idYaSeDeclaro($<s.cadena>1)==NULL){agregarErrorSemanticoIdentificadores($<s.cadena>1, "se intento incrementar/decrementar una variable no existente");}else{if (esNumerica($<s.cadena>1)){printf("Se ha incrementado la variable %s \n", $<s.cadena>1);}else{agregarErrorSemanticoIdentificadores($<s.cadena>1, "se intento incrementar una varibale no operable");}}}
;

incrementoParaForAuxiliar: 	MAS_MAS			
							MENOS_MENOS


incrementoDecremento: IDENTIFICADOR MAS_MAS ';'  	 {if(idYaSeDeclaro($<s.cadena>1)==NULL){agregarErrorSemanticoIdentificadores($<s.cadena>1, "se intento incrementar una variable no existente");}else{if (esNumerica($<s.cadena>1)){printf("Se ha incrementado la variable %s \n", $<s.cadena>1);}else{agregarErrorSemanticoIdentificadores($<s.cadena>1, "se intento incrementar una varibale no operable");}}}
					  |IDENTIFICADOR MENOS_MENOS ';' {if(idYaSeDeclaro($<s.cadena>1)==NULL){agregarErrorSemanticoIdentificadores($<s.cadena>1, "se intento decrementar una variable no existente");}else{if (esNumerica($<s.cadena>1)){printf("Se ha incrementado la variable %s \n", $<s.cadena>1);}else{agregarErrorSemanticoIdentificadores($<s.cadena>1, "se intento decrementar una varibale no operable");}}}
;


sentenciaIfElse: IF '(' exp ')' saltoOpcional '{' listadoDeSentencias '}' {printf ("Se declaro un if \n");} sentenciaElse
				| error saltoOpcional { yyerrok; }
;

sentenciaElse: 	/* vacío */ 
				| ELSE saltoOpcional '{' listadoDeSentencias '}' {printf ("Se declaron un else \n");}
;

sentenciaWhile: WHILE '(' exp ')' saltoOpcional '{'  listadoDeSentencias '}' {printf ("Se declaro un while \n");}

;

sentenciaSwitch: SWITCH '(' exp ')' saltoOpcional '{' sentenciaCase '}' {printf ("Se declaro un switch \n");}

;

sentenciaCase:  /* vacío */ 
				| CASE exp ':' listadoDeSentencias BREAK ';' {printf ("Se declaro un case \n");}
				| sentenciaCase DEFAULT ':' listadoDeSentencias {printf ("Se declaro el default \n");}
;

sentenciaReturn: RETURN exp ';' {printf ("Se declaro un return \n ");}
;

listadoDeSentenciasDeDeclaracion:	/* vacío */ 
									| sentenciaDeclaracion
									| sentenciaDeclaracion ';' listadoDeSentenciasDeDeclaracion 
;

sentenciaDeclaracion: 	TIPO_DATO IDENTIFICADOR ';'				 					 {agregarIdentificador($<s.cadena>2, $<s.tipo>1);} 
						| TIPO_DATO listaIdentificadores  ';'	                      /*accion se realiza en no terminal listaIdentificadores*/
						| TIPO_DATO IDENTIFICADOR '[' expC ']' ';'  				 {agregarIdentificador($<s.cadena>2, $<s.tipo>1);}
						| TIPO_DATO IDENTIFICADOR '[' expC ']' '=' '{' auxi '}' ';'  {agregarIdentificador($<s.cadena>2, $<s.tipo>1);}
						| TIPO_DATO '*' IDENTIFICADOR ';'          				     {agregarIdentificador($<s.cadena>2, $<s.tipo>1);}
						| error saltoOpcional { yyerrok; }
; 


desarrolloFuncion: TIPO_DATO IDENTIFICADOR '(' listaParametrosFuncion ')'  saltoOpcional '{' listadoDeSentencias '}' ';'  {agregarFuncion($<s.tipo>1,$<s.cadena>2,1)}
;

prototipoFuncion: TIPO_DATO IDENTIFICADOR '(' listaParametrosPrototipo ')' ';'  {agregarFuncion($<s.tipo>1,$<s.cadena>2,0)}
;


auxi: expC ',' auxi 
	| expC 
;

sentenciaAsignacion: parametro sentenciaAsignacionAuxiliar exp ';'  {if(!flag()){printf("y se le asigno (podria cambiarse a algo mas general) %s \n ",$<s.cadena>3);}else{bajarFlag();}} 
;


sentenciaAsignacionAuxiliar: '='
							| MAS_IGUAL
							| MENOS_IGUAL 
							| POR_IGUAL
							| DIVIDIDO_IGUAL
;							



parametro:	 TIPO_DATO IDENTIFICADOR  					{printf("aber ci yega");agregarIdentificador($<s.cadena>2,$<s.tipo>1);printf("Se declaro  %s del tipo %s  ",$<s.cadena>2,$<s.cadena>1);}
			| IDENTIFICADOR 	      					{if(idYaSeDeclaro($<s.cadena>1)!=NULL){printf ("Se declaro %s o ",$<s.cadena>1);}else{agregarErrorSemanticoIdentificadores($<s.cadena>1,"debido a que no fue declarado");levantarFlag();}}

;

listaIdentificadores: identificadorA   
						| listaIdentificadores ',' identificadorA 					
;

identificadorA:		IDENTIFICADOR 				    	{agregarIdentificador($<s.cadena>1,mostrarUltimoDato());} 
					|IDENTIFICADOR '=' exp			    {agregarIdentificador($<s.cadena>1,mostrarUltimoDato());} 
					|IDENTIFICADOR MAS_IGUAL exp 		{agregarIdentificador($<s.cadena>1,mostrarUltimoDato());}
					|IDENTIFICADOR MENOS_IGUAL exp  	{agregarIdentificador($<s.cadena>1,mostrarUltimoDato());}
					|IDENTIFICADOR POR_IGUAL exp  		{agregarIdentificador($<s.cadena>1,mostrarUltimoDato());}
					|IDENTIFICADOR DIVIDIDO_IGUAL exp  	{agregarIdentificador($<s.cadena>1,mostrarUltimoDato());}

;

listaParametrosPrototipo: 	/* vacio */
							| TIPO_DATO 							 {agregarParametro($<s.tipo>1);}
							| TIPO_DATO ',' listaParametrosPrototipo {agregarParametro($<s.tipo>1);}
							| listaParametrosFuncion
;



listaParametrosFuncion: 	/* vacio */ 
							|TIPO_DATO IDENTIFICADOR							{agregarParametro($<s.tipo>1);}
							|TIPO_DATO IDENTIFICADOR ',' listaParametrosFuncion	{agregarParametro($<s.tipo>1);} //AREGLAR CON LO Q DIJO JUAN

;

listaParametrosInvocacion: /* vacio */ 
				    	  | noTerminal listaParametrosInvocacionAuxiliar
;

listaParametrosInvocacionAuxiliar: ',' noTerminal listaParametrosInvocacionAuxiliar
									| /* vacio */

//esto sirve para las funciones, son todos los parametros que pueden entrar
noTerminal: IDENTIFICADOR 							{int tipo=buscarTipo($<s.cadena>1);if(tipo>=0){agregarParametro(tipo);}/* else{} */}
			| CHAR 									{agregarParametro($<s.tipo>1);}
			| DECIMAL 								{agregarParametro($<s.tipo>1);}
			| HEXA    								{agregarParametro($<s.tipo>1);}
			| OCTAL  								{agregarParametro($<s.tipo>1);}
			| NUM_R   								{agregarParametro($<s.tipo>1);}
			| noTerminalFinal IGUALDAD noTerminalFinal	    {agregarParametro(1);}          
			| noTerminalFinal MAYOR_IGUAL noTerminalFinal     {agregarParametro(1);}          
			| noTerminalFinal MENOR_IGUAL noTerminalFinal     {agregarParametro(1);}          
			| noTerminalFinal DESIGUALDAD noTerminalFinal     {agregarParametro(1);}          
			| noTerminalFinal AND noTerminalFinal       	    {agregarParametro(0);}             
			| noTerminalFinal OR noTerminalFinal         	    {agregarParametro(0);} 

;

noTerminalFinal:IDENTIFICADOR 							{int tipo=buscarTipo($<s.cadena>1);if(tipo>=0){agregarParametro(tipo);}/* else{} */}
				| CHAR 									{agregarParametro($<s.tipo>1);}
				| DECIMAL 								{agregarParametro($<s.tipo>1);}
				| HEXA    								{agregarParametro($<s.tipo>1);}
				| OCTAL  								{agregarParametro($<s.tipo>1);}
				| NUM_R   								{agregarParametro($<s.tipo>1);}


exp: 		LITERAL_CADENA
			| expC         
			
;


expC:		IDENTIFICADOR			  {if(idYaSeDeclaro($<s.cadena>1)==NULL){agregarErrorSemanticoIdentificadores($<s.cadena>1,"se intento incrementar una variable ");}}
			| CHAR			
			| expC '+' expC           {int tipo1=calcularTipo($<s.cadena>1, $<s.tipo>1); int tipo2=calcularTipo($<s.cadena>3, $<s.tipo>3); if(sonOperablesODelMismoTipo(tipo1,tipo2)){printf ("Se escribio una expresion usando una suma \n");}else{agregarErrorDeTipos($<s.cadena>1, tipo1, '+' ,$<s.cadena>3, tipo2);}}
			| expC '-' expC           {printf ("Se escribio una expresion usando una resta \n");}         
			| expC '>' expC           {printf ("Se escribio una expresion con signo de desigualdad \n");}         
			| expC '<' expC           {printf ("Se escribio una expresion con signo de desigualdad \n");}         
			| expC IGUALDAD expC	  {printf ("Se escribio una expresion con signo de igualdad \n");}          
			| expC MAYOR_IGUAL expC   {printf ("Se escribio una expresion con signo de desigualdad \n");}          
			| expC MENOR_IGUAL expC   {printf ("Se escribio una expresion con signo de desigualdad \n");}          
			| expC DESIGUALDAD expC   {printf ("Se escribio una expresion con signo de distinto \n");}          
			| expC AND expC       	  {printf ("Se escribio una expresion con la operacion logica and \n");}             
			| expC OR expC         	  {printf ("Se escribio una expresion con la operacion logica or \n");}             
			| DECIMAL
			| HEXA
			| OCTAL
			| NUM_R
			| expC '*' expC       	  {printf ("Se escribio una expresion  \n");}              
			| expC '/' expC           {printf ("Se escribio una expresion  \n");}              
;
			



%%

int main ()
{
	yyin=fopen("entrada.c","r");
	yyparse();
 	#ifdef BISON_DEBUG
        yydebug = 1;
	#endif

	generarReporte();
	fclose(yyin);
	system("pause");	
	return 0;

}

