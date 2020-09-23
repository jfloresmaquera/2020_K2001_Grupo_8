%option noyywrap
%{

#include <stdio.h>
#include <string.h>

#include <stdlib.h>

%}

DIGITO_DECIMAL [0-9]    
DIGITO_OCTAL [0-7]                                                                                                                                                                                                                          
DIGITO_HEXADECIMAL [a-fA-F0-9] 
LETRA [a-zA-Z] 
PAL_RESERV_TIPDATOS  [int|float|char|long|double|unsigned|short|struct|typedef|void|signed|enum|register|union]
PAL_RESERV_CONTROL   [do|while|else|if|for|break|case|default|continue]
PAL_RESERV_OTROS     [sizeof|return|const|volatile|goto|extern|auto|static]
DEVOLVER             ["=" | "," | "|" | ";" | "+"-*/%)({}[]&<>!:] //faltan estos y estan definidos raros

%% 

"+="										 {strdup(yylval.cadena, yytext); return MASIGUAL;}
"-="									     {strdup(yylval.cadena, yytext); return MENOSIGUAL;}
"*="										 {strdup(yylval.cadena, yytext); return PORIGUAL;}
"/="										 {strdup(yylval.cadena, yytext); return DIVIDIDOIGUAL;}
">="										 {strdup(yylval.cadena, yytext); return MAYORIGUAL;}
"<="										 {strdup(yylval.cadena, yytext); return MENORIGUAL;}
"=="										 {strdup(yylval.cadena, yytext); return IGUALDAD;}
"&&"										 {strdup(yylval.cadena, yytext); return AND;}
"||"										 {strdup(yylval.cadena, yytext); return OR;}
"!="									     {strdup(yylval.cadena, yytext); return DESIGUALDAD;
0{DIGITO_OCTAL}*                             {yylval.numero=strtol(yytext,NULL,8); return NUMENTERO;}
0[xX]{DIGITO_HEXADECIMAL}+                   {yylval.numero=strtol(yytext,NULL,16); return NUMENTERO;} 
[1-9]{DIGITO_DECIMAL}*                       {yylval.numero=atoi(yytext); return NUMENTERO;} 
{DIGITO_DECIMAL}*\.{DIGITO_DECIMAL}+([Ee](\+|\-)? {DIGITO_DECIMAL})? {yylval.numero=atof(yytext); return NUMREAL;} 
{DIGITO_DECIMAL}\.([Ee](\+|\-)?{DIGITO_DECIMAL})? {{yylval.numero=atof(yytext); return NUMREAL;}
PAL_RESERV_TIPDATOS                         {strdup(yylval.cadena, yytext); return TIPODEDATO ;}
PAL_RESERV_CONTROL                          {strdup(yylval.cadena, yytext); return PALABRARESERVADA ;}
({LETRA}|"_")({LETRA}|"_"|{DIGITO_DECIMAL})* {strdup(yylval.cadena, yytext); return IDENTIFICADOR;} 

%%