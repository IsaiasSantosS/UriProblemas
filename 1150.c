#include <stdio.h>

int main(){
    int x,z,i, soma=0, contado = 0;
    scanf("%d", &x);
    do
    {
        scanf("%d", &z);
    } while (z <= x);
    while (soma <= z)
    {
        soma = soma + (x+contado);
        contado++;
    }
    printf("%d\n", contado);
        
    return 0;
}