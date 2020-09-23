%option noyywrap
%{

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


%}

DIGITO_DECIMAL [0-9]    
DIGITO_OCTAL [0-7] 
DIGITO_HEXADECIMAL [a-fA-F0-9] 
LETRA [a-zA-Z] 
PAL_RESERV_TIPDATOS  int|float|char|long|double|unsigned|short|struct|typedef|void|signed|enum|register|union
PAL_RESERV_CONTROL   do|while|else|if|for|break|case|default|continue
PAL_RESERV_OTROS     sizeof|return|const|volatile|goto|extern|auto|static
CARACTER_IMPRIMIBLE  ["!"|"|"|"\"|"\""|"#"|"$"|"%"|"&"|"'"|"("|")"|"\*"|"+"|","|"-"|"."|"/"|"0"|"1"|"2"|"3"|"4"|"5"|"6"|"7"|"8"|"9"|":"|";"|"<"|"="|">"|"?"|"@"|"A"|"B"|"C"|"D"|"E"|"F"|"G"|"H"|"I"|"J"|"K"|"L"|"M"|"N"|"O"|"P"|"Q"|"R"|"S"|"T"|"U"|"V"|"W"|"X"|"Y"|"Z"|"\["|"\]"|"^"|"_"|"`"|"a"|"b"|"c"|"d"|"e"|"f"|"g"|"h"|"i"|"j"|"k"|"l"|"m"|"n"|"o"|"p"|"q"|"r"|"s"| "t"|"u"|"v"|"w"|"x"|"y"|"z"|"\{"|"\}"|"~"]
CARACTER_PUNTUACION  ["\["|"\]"|"\("|"\)"|"\{"|"\}"|"\."|"->"|"\+\+"|"\+"|"\-\-"|"\-"|"&"|"\*"|"˜"|"\!"|"\/"|"%"|"<<"|">>"|"<"|">"|"<="|">="|"=="|"!="|"ˆ"|"&&"|"||"|"="|"*="|"/="|"%="|"+="|"-="|"<<="|">>="|"&="|"ˆ="|"|="|"\?"|":"|"\;"|"..."|","|"#"|"##"|"$"]

%% 

"\""{CARACTER_IMPRIMIBLE}+"\"" {;}

 0{DIGITO_OCTAL}* {yylval.numero=strtol(yytext,NULL,8);return ACA VA TOKEN ;}
 0[xX]{DIGITO_HEXADECIMAL}+ {yylval.numero=strtol(yytext,NULL,16);return ;} 
 [1-9]{DIGITO_DECIMAL}* {yylval.numero=strtol(yytext,NULL,10);return ;} 
 "\'"{CARACTER_IMPRIMIBLE}"\'" {strcpy({yylval.cadena,yytext) ;return ;} 
 {CARACTER_PUNTUACION} {return ;} 
 (int|float|char|long|double|unsigned|short|struct|typedef|void|signed|enum|register|union) {return ;}
 (do|while|else|if|for|break|case|default|continue) {return ;}
 (sizeof|return|const|volatile|goto|extern|auto|static)  {return ;}  
 ({LETRA}|"_")({LETRA}|"_"|{DIGITO_DECIMAL})* {strcpy({yylval.cadena,yytext); return ;} 
 {DIGITO_DECIMAL}*\.{DIGITO_DECIMAL}+([Ee](\+|\-)?{DIGITO_DECIMAL})? {yylval.numero=Atof(yytext);return ;} 
 {DIGITO_DECIMAL}\.([Ee](\+|\-)?{DIGITO_DECIMAL})? {yylval.numero=Atof(yytext);return ;}

 "\/\/"{CARACTER_IMPRIMIBLE}*"\n"  {strcpy({yylval.cadena,yytext);return ;} 
 "/*"[^"*/"]*"*/" {strcpy({yylval.cadena,yytext);return ;}
 "\n" {return ;}
 [.]* {return ;}

%%