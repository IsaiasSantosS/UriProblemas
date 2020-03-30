#include <stdio.h>

int main(){
    int num, quant, C = 0, R = 0 , S = 0, i;
    char tipo;
    float total;
    scanf("%d", &num);
    for ( i = 0; i < num; i++)
    {
        scanf("%d %c", &quant, &tipo);
        if (tipo == 'C')
        {
            C = C  + quant;
        }
        else if (tipo == 'R')
        {
            R = R + quant;
        }
        else
        {
            S = S + quant;
        }  
    }

    total = C+R+S;

    printf("Total: %.0f cobaias\n", total);
    printf("Total de coelhos: %d\n", C);
    printf("Total de ratos: %d\n", R);
    printf("Total de sapos: %d\n", S);
    printf("Percentual de coelhos: %.2f %\n", (C/total)*100 );
    printf("Percentual de ratos: %.2f %\n", (R/total)*100 );
    printf("Percentual de sapos: %.2f %\n", (S/total)*100 );
    
    return 0;
}