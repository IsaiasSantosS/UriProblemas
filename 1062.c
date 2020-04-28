#include <stdio.h>

int main(){
    float num, soma = 0;
    int positivo = 0, i;
    for (i = 0; i < 6; i++)
    {
        scanf("%f", &num);
        if (num >= 0)
        {
            positivo++;
            soma = soma + num;
        }
        
    }
    soma = soma / positivo;
    printf("%d valores positivos\n%.1f\n", positivo, soma);    
    return 0;
}