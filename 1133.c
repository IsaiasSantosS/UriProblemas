#include <stdio.h>

int main(){
    int n, m, soma_aux;
    scanf("%d %d", &n, &m);
    if (n > m){
        soma_aux = n;
        n = m;
        m = soma_aux;
    }
    while (n < m)
    {
        n++;
        if (((n%5) == 2) || ((n%5) == 3))
        {
            printf("%d\n", n);
        }     
    }
  
    return 0;
}