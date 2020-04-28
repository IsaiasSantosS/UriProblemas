#include <stdio.h>
int main(){
    int num, par=0, impar = 0, postitivo =0, negativo=0,  i;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &num);
        if ((num%2) == 0) { par++; }  
        if ((num%2) != 0) { impar++; }  
        if (num < 0) { negativo++; }  
        if (num > 0) { postitivo++; }  
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n",par,impar);
    printf("%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", postitivo, negativo); 

    return 0;
}