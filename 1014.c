#include <stdio.h>

int main(){
    int km;
    float preco, precoTotal;
    scanf("%d", &km);
    scanf("%f", &preco);
    precoTotal = km/preco;
    printf("%.3f km/l\n", precoTotal);
    return 0;
}