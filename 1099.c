#include <stdio.h>
int main(){
    int n, n1, n2, i, soma_aux = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &n1, &n2);
        if (n1 > n2) {
            soma_aux = n1;
            n1 = n2;
            n2 = soma_aux; 
        }
        soma_aux = 0;
        while (n1 < n2)
        {
            if ((n1%2) == 0)
            { n1 = n1 + 1; }else
            { n1 = n1 + 2; }
            if (n1 < n2)
            {
                soma_aux = soma_aux + n1;
            }
        }
        printf("%d\n", soma_aux);
        soma_aux = 0;
    }
    
    return 0;
}