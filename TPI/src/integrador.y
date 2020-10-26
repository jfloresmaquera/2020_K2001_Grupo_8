%{ /* seccion de definiciones */

	#include <stdio.h>
	#include <math.h>
	#include <ctype.h>
	#include <stdlib.h>
	#include <string.h>
	#include "tablaDeSimbolos.h"
	extern FILE* yyin; 


	void yyerror (char const *s) {
  		 fprintf(stderr, "hay un error \n", s);
	}

	int yylex();

	
   

%}
/* 	struct{
     char cadena[50];
     float valor;
     int tipo;
	}s; */

%union{
	struct{
		char cadena[50];
		int tipo;// 0 = int, 1 = char*, 2 = numero, 3 = void
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
//%token <s> error


%type <s> incrementoDecremento
%type <s> auxi
%type <s> expC
%type <s> identificadorA
%type <s> exp
%type <s> sentenciaDeclaracion
%type <s> listaParametros
%type <s> parametro
%type <s> listaIdentificadores
%type <s> sentenciaReturn

%%



input:    /* vacío */
        | input line
;

line:   
		|'\n'      
		| listadoDeSentenciasDeDeclaracion saltoOpcional
		| definicionFuncion  saltoOpcional
		| sentenciaSwitch saltoOpcional
		| sentenciaWhile saltoOpcional
		| sentenciaFor saltoOpcional
		| sentenciaDoWhile saltoOpcional
		| sentenciaIfElse saltoOpcional
		| sentenciaAsignacion saltoOpcional
		| incrementoDecremento saltoOpcional
		| error saltoOpcional { yyerrok; }

;
//lo agregamos para ver si se solucionaba el problema de los saltos de linea pero no funciona
 
saltoOpcional:  /* vacío */
				| '\n' saltoOpcional
				| '\n'
;

definicionFuncion: TIPO_DATO IDENTIFICADOR '(' listaParametros')' saltoOpcional '{' listadoDeSentencias '}' ';' {printf("Se ha definido una funcion de tipo %s llamada %s \n",$<s.cadena>1,$<s.cadena>2);}
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
					| incrementoDecremento listadoDeSentencias
					| '\n' listadoDeSentencias
;
sentenciaDoWhile: DO '{' listadoDeSentencias '}' WHILE '(' exp ')' ';' {printf( "Se ha declarado una sentencia do-while \n");}

;
sentenciaFor:	FOR  '(' sentenciaDecOAsig  expC ';' incrementoParaFor ')' saltoOpcional '{' listadoDeSentencias '}'  {printf("Se ha declarado una sentencia for\n");}

;

sentenciaDecOAsig: sentenciaAsignacion
				|  sentenciaDeclaracion
;


incrementoParaFor: IDENTIFICADOR MAS_MAS       {printf("Se ha incrementado la variable %s \n",$<s.cadena>1);}
				  |	IDENTIFICADOR MENOS_MENOS  {printf("Se ha decrementado la variable %s\n",$<s.cadena>1);}
;


incrementoDecremento: IDENTIFICADOR MAS_MAS ';'  		 {printf("Se ha incrementado la variable %s \n",$<s.cadena>1);}
					  |IDENTIFICADOR MENOS_MENOS ';'     {printf("Se ha decrementado la variable %s\n",$<s.cadena>1);}
;


sentenciaIfElse: IF '(' exp ')' saltoOpcional '{' listadoDeSentencias '}' {printf ("Se declaro un if \n");} sentenciaElse
		| error saltoOpcional { yyerrok; }
;

sentenciaElse: 	/* vacío */
				| ELSE saltoOpcional '{' listadoDeSentencias '}' {printf ("Se declaron un else \n");}
;

sentenciaWhile: WHILE '(' exp ')' saltoOpcional '{'  listadoDeSentencias '}' {printf ("Se declaro un while \n");}

;

sentenciaSwitch: /* vacío */
				| SWITCH '(' exp ')' saltoOpcional '{' sentenciaCase '}' {printf ("Se declaro un switch \n");}

;

sentenciaCase:  /* vacío */
				| CASE exp ':' listadoDeSentencias BREAK ';' {printf ("Se declaro un case \n");}
				| sentenciaCase DEFAULT ':' listadoDeSentencias {printf ("Se declaro el default \n");}
;

sentenciaReturn: /* vacío */
				|RETURN exp ';' {printf ("Se declaro un return \n ");}
;

listadoDeSentenciasDeDeclaracion:	/* vacío */
									| sentenciaDeclaracion
									| sentenciaDeclaracion ';' listadoDeSentenciasDeDeclaracion 
;

sentenciaDeclaracion: 	TIPO_DATO IDENTIFICADOR ';'				  {printf ("Se declaro una variable de tipo %s llamada %s \n", $<s.cadena>1,$<s.cadena>2);} 
						| TIPO_DATO listaIdentificadores       
						| TIPO_DATO IDENTIFICADOR '[' expC ']' ';' {printf ("Se declaro un arreglo de tipo %s llamado %s \n",$<s.cadena>1,$<s.cadena>2);}
						| TIPO_DATO IDENTIFICADOR '[' expC ']' '=' '{' auxi '}' ';' {printf ("Se declaro y se asignaron valores a las posiciones de un arreglo de tipo %s llamado %s \n",$<s.cadena>1,$<s.cadena>2);}
						| TIPO_DATO '*' IDENTIFICADOR ';'          {printf ("Se declaro un puntero \n");}
						| TIPO_DATO IDENTIFICADOR '(' listaParametros ')' ';'    {printf ("Se declaro un prototipo de una funcion de tipo %s llamada %s \n",  $<s.cadena>1, $<s.cadena>2);}
						| error saltoOpcional { yyerrok; }
; 

auxi: expC ',' auxi 
	| expC 
;

sentenciaAsignacion: parametro '=' exp ';'  {printf ("Se le asigno  %s y se le asigno el valor %s \n",$<s.cadena>1,$<s.cadena>3);}
					|parametro MAS_IGUAL exp ';' {printf ("Se le asigno  %s y se le asigno su valor mas %s \n",$<s.cadena>1,$<s.cadena>3);}
					|parametro MENOS_IGUAL exp ';'  {printf ("Se le asigno  %s y se le asigno su valor menos %s \n",$<s.cadena>1,$<s.cadena>3);}
					|parametro POR_IGUAL exp ';'   {printf ("Se le asigno  %s y se le asigno su valor por %s \n",$<s.cadena>1,$<s.cadena>3);}
					|parametro DIVIDIDO_IGUAL exp ';'  {printf ("Se le asigno  %s y se le asigno su valor dividido %s \n",$<s.cadena>1,$<s.cadena>3);}
;

parametro:	 TIPO_DATO IDENTIFICADOR
			| IDENTIFICADOR 

;

listaIdentificadores: 	  identificadorA
						| listaIdentificadores ',' identificadorA 
						

;

identificadorA:		 IDENTIFICADOR ';'				    	{printf ("Se declaro una variable llamada %s \n",$<s.cadena>1);}
					|IDENTIFICADOR '=' exp';'			    {printf ("Se declaro una variable llamada %s y se le asigno el valor %s \n",$<s.cadena>1,$<s.cadena>3);}
					|IDENTIFICADOR MAS_IGUAL exp ';'		{printf ("Se declaro una variable llamada %s y se le asigno el valor %s \n",$<s.cadena>1,$<s.cadena>3);}
					|IDENTIFICADOR MENOS_IGUAL exp ';' 		{printf ("Se declaro una variable llamada %s y se le asigno el valor %s \n",$<s.cadena>1,$<s.cadena>3);}
					|IDENTIFICADOR POR_IGUAL exp ';' 		{printf ("Se declaro una variable llamada %s y se le asigno el valor %s \n",$<s.cadena>1,$<s.cadena>3);}
					|IDENTIFICADOR DIVIDIDO_IGUAL exp ';' 	{printf ("Se declaro una variable llamada %s y se le asigno el valor %s \n",$<s.cadena>1,$<s.cadena>3);}

;

listaParametros:  TIPO_DATO
				| TIPO_DATO ',' listaParametros
				|TIPO_DATO IDENTIFICADOR
				|TIPO_DATO IDENTIFICADOR ',' listaParametros

;

			
exp: 		LITERAL_CADENA
			| expC         
			
;

expC:		IDENTIFICADOR
			| CHAR
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
			| expC '+' expC           {printf ("Se escribio una expresion  \n");}  

;





%%

int main ()
{

	yyin=fopen("entrada.c","r");
 
   	yyparse();
 
	
	#ifdef BISON_DEBUG
        yydebug = 1;
	#endif
	fclose(yyin);
	system("pause");
	generarReporte();
	return 0;

}

