#include <stdio.h>
int main(){
    int n, x, y, i, cont = 0, soma =0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);
        while (cont < y)
        {
            if (x%2 == 0)
            {
                x = x + 1;
            }else{
                soma = x + soma;
                x = x + 2;
                cont++;
            }
        }
        printf("%d\n", soma);   
        cont=0;
        soma=0; 
    }
    
    return 0;
}