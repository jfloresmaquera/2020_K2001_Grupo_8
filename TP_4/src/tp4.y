%{ /* seccion de definiciones */
	#incluide <stdio.h>
	#incluide <math.h>
	#incluide <ctype.h>
	#incluide <stdlib.h>

	#define YYDEBUG 1

	int yylex();

	int yywrap(){
		return(1);
	}
%}

%union
{
	int numero;
	float numeroR;
	char cadena[50];
}


// token -> terminales
%token <numero> NUM_ENTERO        
%token <numeroR> NUM_REAL        
%token <cadana> LITERAL_CADENA    
%token <cadena> IGUAL_IGUAL       
%token <cadena> DISTINTO           
%token <cadena> MAYOR_IGUAL        
%token <cadena> MENOR_IGUAL        
%token <cadena> MAYOR            
%token <cadena> MENOR           
%token <cadena> PALABRA_RESERVADA 
%token <cadena> TIPO_DATO        
%token <cadena> OR				 
%token <cadena> MAS_IGUAL        
%token <cadena> MENOS_IGUAL     
%token <cadena> POR_IGUAL       
%token <cadena> AND 			 
%token <cadena> MAS_MAS         
%token <cadena> SIZEOF          
%token <cadena> IDENTIFICADOR    
%token <cadena> DOS_PUNTOS      



%left '+' '-' '*' ',' OR AND IGUAL_IGUAL DISTINTO MAYOR_IGUAL MENOR_IGUAL
%right '=' DOS_PUNTOS '&' '!' '(' ')' '[' ']' MAS_IGUAL MENOS_IGUAL POR_IGUAL MAS_MAS SIZEOF



%% /* A continuación las reglas gramaticales y las acciones */

input:  /* vacio */
		| input line
;

line:   '/n'
		| expresion '/n'
;

expresion: expAsignacion
;

expAsignacion: expCondicional
			 | expUnaria operAsignacion expAsignacion
;

operAsignacion: '='
			 |MAS_IGUAL
			 |MENOS_IGUAL
			 |POR_IGUAL
;

expCondicional: expOr
			  | expOr expresion DOS_PUNTOS expCondicional  
			  | expresion DOS_PUNTOS expCondicional 
;



expOr: 			expAnd
				| expOr OR expAnd
;

expAnd: expIgualdad 
		| expAnd AND expIgualdad
;

expIgualdad: expRelacional
			| expIgualdad IGUAL_IGUAL expRelacional
			| expIgualdad DISTINTO expRelacional
;

expRelacional: expAditiva
			 | expRelacional operadorRelacional expAditiva

;

operadorRelacional: MAYOR_IGUAL		
					| MENOR_IGUAL
					|MAYOR
					|MENOR
					
;


expAditiva: expMultiplicativa	
			|expAditiva operadorAditivo expMultiplicativa
;


operadorAditivo: '+'
				| '-'
;

expMultiplicativa: expUnaria
				   | expMultiplicativa operadorMultiplicativo expUnaria
;

operadorMultiplicativo: '*'
						| '/'
;

expUnaria: expPostFijo
			| MAS_MAS expUnaria
			| operUnario expUnaria
			| SIZEOF '(' TIPO_DATO ')'
;


operUnario: '&'
			| '*'
			| '-'
			| '!'
;

expPostFijo: expPrimaria
			| expPostFijo '[' expresion ']'
			| expPostFijo '(' listaArgumentos ')'
			| expPostFijo '('')'
;

listaArgumentos: expAsignacion
				| listaArgumentos ',' expAsignacion
;

expPrimaria:  IDENTIFICADOR 	{printf("se encontro el identificador \n");}
			 | NUM_ENTERO		{printf("se encontro un numero \n");}
			 | NUM_REAL			{printf("se encontro un numero real \n");}
			 | LITERAL_CADENA 	{printf("se encontro un literal cadena \n");}
			 | PALABRA_RESERVADA  {printf("se encontro una palabra reservada \n");}
;


%%

main ()
{
	#ifdef BISON_DEBUG
    yydebug = 1;
	#endif
	yyparse();
}