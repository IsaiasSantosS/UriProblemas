#include <stdio.h>

int main(){
    float media, soma = 0, quant = 0;
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
    
}