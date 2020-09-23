%{ /* seccion de definiciones */
	#incluide <stdio.h>
	#incluide <math.h>
	#incluide <ctype.h>
	#incluide <stdlib.h>

	#define YYDEBUG 1

	void yyerror(char const *s){fprintf (stderr, "%s\n> ", s);}
 
 
	int yylex();

	int yywrap(){
		return(1);
	}

	symrec *aux;
%}

%union
{
	int numero;
	char* cadena;
}


// token -> terminales
%token <numero> NUM
%token <cadana> LITERAL_CADENA
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
%token <cadena> MENOS_IGUAL
%token <cadena> POR_IGUAL
%token <cadena> DOBLE_AMPERSAND
%token <cadena> MAS_MAS
%token <cadena> SIZEOF
%token <cadena> IDENTIFICADOR




%left '+' '-' '*' ',' DOBLE_PIPE DOBLE_AMPERSAND IGUAL_IGUAL DISTINO MAYOR_IGUAL MENOR_IGUAL
%right '=' ':' '&' '!' '(' ')' '[' ']' MAS_IGUAL MENOS_IGUAL POR_IGUAL MAS_MAS SIZEOF



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
			  | expOr expresion ':' expCondicional  
			  | expresion ':' expCondicional 
;

expOr: 			expAnd
				| expOr DOBLE_PIPE expAnd
;

expAnd: expIgualdad 
		| expAnd DOBLE_AMPERSAND expIgualdad
;

expIgualdad: expRelacional
			| expIgualdad IGUAL_IGUAL expRelacional
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

expPrimaria: IDENTIFICADOR 	{printf("se encontro el identificador \n");}
			 | NUM 			{printf("se encontro un numero \n");}
			 | LITERAL_CADENA {printf("se encontro un literal cadena \n");}
;


%%

main ()
{
	#ifdef BISON_DEBUG
    yydebug = 1;
	#endif
	yyparse();
}