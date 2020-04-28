#include <stdio.h>
int main(){
    int n, soma = 0, quant = 0;
    float media;
    scanf("%d", &n);
    while (n >= 0){
        soma = soma + n;
        quant++;
        scanf("%d", &n);
    }
    media = soma / (float) quant;
    printf("%.2f\n", media);    
    return 0;
}