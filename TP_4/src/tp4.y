%{ /* seccion de definiciones */
	#include <stdio.h>
	#include <math.h>
	#include <ctype.h>
	#include <stdlib.h>



	int yylex();

	/* int yywrap(){
		return(1);
		 
	} */
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
%token <cadena> LITERAL_CADENA    
%token <cadena> PALABRA_RESERVADA 
%token <cadena> TIPO_DATO        
%token <cadena> IDENTIFICADOR    

%left '+' '-' '*' ',' "||" "&&" "==" "!=" ">=" "<="
%right '=' ':' '&' '!' '(' ')' '[' ']' "+=" "-=" "*=" "++" "sizeof"



%% /* A continuación las reglas gramaticales y las acciones */

input:  /* vacio */
		| input line
;

line:   '/n'
		| expresion '/n'
;

expresion: expAsignacion ';'
;

expAsignacion: expCondicional
			 | expUnaria operAsignacion expAsignacion 	{printf("se encontro una asignacion \n");}
;

operAsignacion: '='
				|"+="
				|"-="
				|"*="
;

expCondicional: expOr
			  | expOr expresion ':' expCondicional  	{printf("se encontro una condicion \n");}
			  | expresion ':' expCondicional 			{printf("se encontro una condicion \n");}
;



expOr: 			expAnd
			| expOr "||" expAnd
;

expAnd: expIgualdad 
		| expAnd "&&" expIgualdad
;

expIgualdad: expRelacional
			| expIgualdad "==" expRelacional
			| expIgualdad "!=" expRelacional 
;

expRelacional: expAditiva
			 | expRelacional operadorRelacional expAditiva

;

operadorRelacional:  ">="		
					|"<="
					|'>'
					|'<'
					
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
			| "++" expUnaria
			| operUnario expUnaria
			| "sizeof" '(' TIPO_DATO ')'
;


operUnario: '&'
			| '*'
			| '-'
			| '!'
;

expPostFijo: expPrimaria
			| expPostFijo '[' expresion ']'
			| expPostFijo '(' listaArgumentos ')' {printf("se encontro una declaracion de funcion \n");}
			| expPostFijo '('')' 
;

listaArgumentos: expAsignacion
				| listaArgumentos ',' expAsignacion
;

expPrimaria:  IDENTIFICADOR 	
			 | NUM_ENTERO		
			 | NUM_REAL			
			 | LITERAL_CADENA 	
			 | PALABRA_RESERVADA 
			 | TIPO_DATO		
;


%%

void main ()
{
	yyparse();
	system("pause");
}