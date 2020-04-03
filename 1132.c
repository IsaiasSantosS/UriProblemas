#include <stdio.h>

int main(){
    int n, m, soma_aux;
    scanf("%d %d", &n, &m);
    if (n > m){
        soma_aux = n;
        n = m;
        m = soma_aux;
    }
    soma_aux = 0;
    while (n <= m)
    {
        if (n%13 != 0)
        {
            soma_aux += n;
        }
        n++;        
    }
    printf("%d\n", soma_aux);
    
    return 0;
}