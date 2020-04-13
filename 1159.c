#include <stdio.h>
int main(){
    int x, i, soma = 0;
    scanf("%d", &x);
    while (x != 0)
    {
        for (i = 0; i < 5; i++)
        {
            if (x%2 == 0)
            {
                soma = x + soma;
                x = x + 2;
            }else{
                soma = x + soma + 1;
                x = x + 3;
            }
        }
        printf("%d\n", soma);
        soma = 0;
        scanf("%d", &x);
    }
    return 0;
}