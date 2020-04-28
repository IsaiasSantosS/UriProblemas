#include <stdio.h>
int main(){
    int m, n, soma_aux;
    scanf("%d %d", &m, &n);
    while ((m > 0) && (n > 0))
    {  
        if (m > n) {
            soma_aux = m;
            m = n;
            n = soma_aux; 
        }
        soma_aux = 0;
        while (m <= n)
        {
            soma_aux = soma_aux + m;
            printf("%d ", m);
            m += 1;
        }
        printf("Sum=%d\n", soma_aux);
        scanf("%d %d", &m, &n);
    }
    
}