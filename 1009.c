#include <stdio.h>

int main(){
    char nome[30];
    double salario, valorVenda;

    scanf("%s", nome);
    scanf("%lf", &salario);
    scanf("%lf", &valorVenda);

    salario = salario + (valorVenda * 0.15);

    printf("TOTAL = R$ %.2lf\n", salario);

    return 0;
}