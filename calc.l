%option noyywrap
%option always-interactive

%{
#include <stdio.h>
#include <string>

#define YY_DECL int yylex()
#include "calc.tab.hpp"
void yyerror(const char* s);
%}

%%

[ \t]  ; // ignore all whitespace
([0-9]+|[0-9]+"."[0-9]*)       { yylval.number = atof(yytext); return NUMBER; }
[[:alpha:]_][[:alnum:]_]*      { yylval.identifier = new std::string(yytext); return IDENTIFIER;}
[-|+|*|/|\n|=|(|)|^]           { return *yytext; }
.                              yyerror("Unknown character");

%%
