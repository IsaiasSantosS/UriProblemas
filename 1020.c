#include <stdio.h>

int main(){
    int valor, ano, mes, dia;
    scanf("%d", &valor);
    ano = valor/365;
    mes = (valor%365)/30;
    dia = (valor%365)%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano,mes,dia);
    return 0;
}