#include <stdio.h>
int main(){
    int n, menor, posicao, i;
    scanf("%d", &n);
    int x[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }
    menor = x[0];
    for ( i = 1; i < n; i++)
    {
        if (menor > x[i])
        {
            menor = x[i];
            posicao = i;
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);
}