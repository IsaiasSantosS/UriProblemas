#include <stdio.h>
int main(){
    int n, p, i, j, soma;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &p);
        soma = 0;
        for ( j = 1; j < p; j++)
        {
            if ((p%j)==0){
                soma = soma + j;
            }
        }
        if (soma == p) {
            printf("%d eh perfeito\n", p);
        }else{
            printf("%d nao eh perfeito\n", p);
        }
        
    }
    
    
    return 0; 
}