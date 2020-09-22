%{ /* seccion de definiciones */
	#incluide <stdio.h>
	#incluide <math.h>
	#incluide <ctype.h>
	#incluide <stdlib.h>
%}

%union
{
	float real;
	char cadena[50];
}

%token <real> NUM
%token <cadena> IGUAL_IGUAL
%token <cadena> DISTINO
%token <cadena> MAYOR_IGUAL
%token <cadena> MENOR_IGUAL
%token <cadena> MAYOR
%token <cadena> MENOR
%token <cadena> IF
%token <cadena> ELSE
%token <cadena> SWITCH
%token <cadena> TIPO_DATO
%token <cadena> DOUBLE_PIPE
%token <cadena> MAS_IGUAL
%token <cadena> MENOR_IGUAL
%token <cadena> POR_IGUAL
%token <cadena> DOBLE_AMPERSAND
%token <cadena> MAS_MAS
%token <cadena> SIZEOF
%token <cadena> LITERAL_CADENA
%token <cadena> IDENTIFICADOR


%left '+' '-' '*' ',' DOBLE_PIPE DOBLE_AMPERSAND IGUAL_IGUAL DISTINO MAYOR_IGUAL MENOR_IGUAL
%right '=' ':' '&' '!' '(' ')' '[' ']' MAS_IGUAL MENOR_IGUAL POR_IGUAL MAS_MAS SIZEOF



%% /* A continuación las reglas gramaticales y las acciones */

input:  /* vacio */
		| input
;

line:   '/n'
		| expresiones '/n'
;

expresion: expAsignacion
;

expAsignación: expCondicional
			 | expUnaria operAsignacion expAsignacion
;

operAsignacion: '='
			 |MAS_IGUAL
			 |MENOS_IGUAL
			 |POR_IGUAL
;

expCondicional: expOr
			  | expOr expresion ':' expCondicional
;

expOr: 			expAnd
				| expOr DOBLE_PIPE expAnd
;

expAnd: expIgualdad 
		| expAnd DOBLE_AMPERSAND expIgualdad
;

expIgualdad: expRelacional
			| expIgualdad IGUAL_IGUAL expRexpRelacional
;

expRelacional: expAditiva
			 | expAditiva '+' expMultiplicativa

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

expMultiplicativa: expUnitaria
				   | expMultiplicativa operadorMultiplicativo expUnaria
;

operadorMultiplicativo: '*'
						| '/'
;

expUnitaria: expPostFijo
			| MAS_MAS expUnaria
			| operUnario expUnaria
			| SIZEOF '(' TIPO_DATO ')'
;


operUnario: '&'
			| '!'
;

expPostFijo: extPrimara
			| expPostFijo '[' expresion ']'
			| expPostFijo '(' listaArgumentos ')'
;

listaArgumentos: expresion
				| listaArgumentos ',' expresion
;

expPrimaria: IDENTIFICADOR 	{printf("se encontro el identificador \n");}
			 | NUM 			{printf("se encontro un numero \n");}


%%

main ()
{
	yyparse();
}