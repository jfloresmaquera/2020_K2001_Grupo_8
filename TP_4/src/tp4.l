%{

  
#include "tp4.tab.h"
#include <string.h>
#include <stdlib.h>




%}

DIGITO_DECIMAL [0-9]    
DIGITO_OCTAL [0-7] 
DIGITO_HEXADECIMAL [a-fA-F0-9] 

%%

"+="										 { strcpy(yylval.cadena, yytext); return MAS_IGUAL;}
"-="										 { strcpy(yylval.cadena, yytext); return MENOS_IGUAL;}
"*="										 { strcpy(yylval.cadena, yytext); return POR_IGUAL;}
"/="										 { strcpy(yylval.cadena, yytext); return DIVIDIDO_IGUAL;}
 0{DIGITO_OCTAL}*                            {strcpy(yylval.cadena, yytext); return OCTAL;}
 0[xX]{DIGITO_HEXADECIMAL}+                  {strcpy(yylval.cadena, yytext); return HEXA;} 
 [1-9]{DIGITO_DECIMAL}*                      {strcpy(yylval.cadena, yytext); return DECIMAL;} 
[0-9]+("."[0-9]+)?                           { strcpy(yylval.cadena, yytext); return NUM_R; }
while 										 { strcpy(yylval.cadena, yytext); return WHILE;}
do 											 { strcpy(yylval.cadena, yytext); return DO;}
case										 { strcpy(yylval.cadena, yytext); return CASE;}
break										 { strcpy(yylval.cadena, yytext); return BREAK;}
default										 { strcpy(yylval.cadena, yytext); return DEFAULT;}
for                                          { strcpy(yylval.cadena, yytext); return FOR;}
switch                                       { strcpy(yylval.cadena, yytext); return SWITCH;}
if                    		               	 { strcpy(yylval.cadena, yytext); return IF;}
else            			               	 { strcpy(yylval.cadena, yytext); return ELSE;}
return		            	               	 { strcpy(yylval.cadena, yytext); return RETURN;}
char|int|float|double|void|struct|bool       { strcpy(yylval.cadena, yytext); return TIPO_DATO; }
(\'[a-zA-Z]\')                               { strcpy(yylval.cadena, yytext); return CHAR;}
[a-zA-Z_]([a-zA-Z_]|[0-9])*                  { strcpy(yylval.cadena, yytext); return IDENTIFICADOR; }
">="										 { strcpy(yylval.cadena, yytext); return MAYOR_IGUAL;}
"<="										 { strcpy(yylval.cadena, yytext); return MENOR_IGUAL;}
"=="										 { strcpy(yylval.cadena, yytext); return IGUALDAD;}
"&&"									     { strcpy(yylval.cadena, yytext); return AND;}
"||"										 { strcpy(yylval.cadena, yytext); return OR;}
"!="										 { strcpy(yylval.cadena, yytext); return DESIGUALDAD;}
\"LETRAS*\"			 			              { strcpy(yylval.cadena, yytext); return  LITERAL_CADENA;}
"++"                                          { strcpy(yylval.cadena, yytext); return  MAS_MAS;}
"--"                                          { strcpy(yylval.cadena, yytext); return  MENOS_MENOS;}
","     { return ','; }
"="     { return '='; }
";"     { return ';'; }
"+"     { return '+'; }
"-"     { return '-'; }
"*"     { return '*'; }
"/"     { return '/'; }
"%"     { return '%'; }
")"     { return ')'; }
"("     { return '('; }
"{"     { return '{'; }
"}"     { return '}'; }
"["     { return '['; }
"]"     { return ']'; }
"&"     { return '&'; }
"|"     { return '|'; }
"<"     { return '<'; }
">"     { return '>'; }
"!"     { return '!'; }
":"		{ return ':'; }
"\n"    { return '\n';}


%%