/* Ejemplo para detección de declaración de variables */

%{
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define YYDEBUG 1

int flag_error=0;
int contador=0;
char* tipo;

int yylex();
int yywrap(){
	return(1);
}

void yyerror (char const *s) {
   fprintf (stderr, "%s\n", s);
}

%}

%union {
char cadena[30];
int entero;
int tipo;
float real;
}

%token <entero> NUM
%token <cadena> IDENTIFICADOR
%token <cadena> TIPO_DATO
%token <entero> error

%type <cadena> identificadorA
%type <entero> expresion

%% /* A continuacion las reglas gramaticales y las acciones */

input:    /* vacio */
        | input line
;

line:     '\n'
        | sentenciaDeclaracion '\n'
;

------------------------------------
expresion: expAsignación;
expAsignacion: expCondicional
               |expUnaria operAsignación expAsignación;
operAsignacion: =
                |+= ;
expCondicional: expOr
                |expOr ? expresión : expCondicional ;
expOr: expAnd
       |expOr || expAnd;
expAnd: expIgualdad
        |expAnd && expIgualdad;
expIgualdad: expRelacional
        |expIgualdad == expRelacional;
expRelacional: expAditiva
               |expRelacional >= expAditiva;
expAditiva: expMultiplicativa
            |expAditiva + expMultiplicativa
expMultiplicativa: expUnaria
                   |expMultiplicativa * expUnaria;
expUnaria: expPostfijo
           |++ expUnaria
           |operUnario expUnaria
           |sizeof (nombreTipo);
operUnario: &
            |(dirección)
            |*
            |(puntero)
            |–
            |(signo)
            |!
            |(“not”);
expPostfijo: expPrimaria
             |expPostfijo [ expresión ]
             |expPostijo ( listaArgumentosop );
listaArgumentos: expAsignación
                 |listaArgumentos , expAsignación;
expPrimaria: identificador
             |constante
             |literalCadena
             |( expresión );
nombreTipo: char
            |int 
            |double;

%%

int main ()
{
#ifdef BISON_DEBUG
        yydebug = 1;
#endif
  yyparse ();
}