#include <stdio.h>
int main(){
    int n, i, maior = 0, posicao = 0;
    for ( i = 1; i <= 100 ; i++)
    {
        scanf("%d", &n);
            
        if (n > maior)
        {
            maior = n;
            posicao = i;
        }
        
    }
    printf("%d\n%d\n", maior, posicao);
    return 0;  
}