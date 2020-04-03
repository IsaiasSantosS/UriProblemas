#include <stdio.h>

int main(){
    float media, soma, quant;
    int n;
    do
    {
        quant = 0;
        soma = 0;
        do
        {
            scanf("%f", &media);
            if (media >=0 && media <=  10){
                quant++;
                soma += media;
            }else{
                printf("nota invalida\n");
            }
        } while (quant != 2);
        printf("media = %.2f\n", (soma/2));
        do
        {
            puts("novo calculo (1-sim 2-nao)"); 
            scanf("%d", &n);
        } while (n < 1 || n > 2);
    } while (n != 2);
    
}