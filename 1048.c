#include <stdio.h>

int main(){
    float salario, reajuste;
    int porcentagem;
    scanf("%f", &salario);
    if (salario <= 400){
        reajuste = (salario * 1.15) - salario;
        salario = salario + reajuste;
        porcentagem = 15;
    }else if ((salario > 400) && (salario<=800))
    {
        reajuste = (salario * 1.12) - salario;
        salario = salario + reajuste;
        porcentagem = 12;
    }else if ((salario > 800) && (salario<=1200))
    {
        reajuste = (salario * 1.10) - salario;
        salario = salario + reajuste;
        porcentagem = 10;
    }else if ((salario > 1200) && (salario<=2000))
    {
        reajuste = (salario * 1.07) - salario;
        salario = salario + reajuste;
        porcentagem = 7;
    }else if (salario > 2000)
    {
        reajuste = (salario * 1.04) - salario;
        salario = salario + reajuste;
        porcentagem = 4;
    }
    

    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %\n", salario, reajuste, porcentagem);

    return 0;
}