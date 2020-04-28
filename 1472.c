#include <stdio.h>
 int busca(int* arranjo,int x,int n){
    int p,r,q;

    p = 0;
    r = n-1;

    while (p <= r)
    {
        q = (p+r)/2;
        if (arranjo[q] == x)
        {
            return  q;
        }
        else if (arranjo[q] > x)
        {
            r = q - 1;
        } else { p = q + 1; }        
    }

    return -1;
}
int main() {
 int n,i, soma, espaco, cont;
    
    while(scanf("%d", &n) != -1){
        int p[n];
        soma = 0;
        cont = 0;
            
        for ( i = 0; i < n; i++)
        {
        scanf("%d", &p[i]);
        soma = p[i] + soma;
        p[i] = soma;
        }
        if ((soma % 3) != 0) {
        printf("0\n");
        } else {
        espaco = soma/3;
        
        for ( i = 0; i < n; i++)
        {
            if ( busca(p, p[i]+espaco, n) != -1){
            if ( busca(p, p[i]+(2*espaco), n) != -1){
                cont ++;
            } 
            }  
        } 
        printf("%d\n", cont);
        }
    }
    return 0;

}