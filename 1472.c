#include <stdio.h>

int busca(int* arranjo,int x,int t){
    int p = 0;
    int r = t-1;
    int q = 0;
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

int main(){
    int n,i, soma, aux, espaco, cont;
    
    scanf("%d", &n);

      int p[n];
      soma = 0;
      cont = 0;
      aux = 0;
          
      for ( i = 0; i < n; i++)
      {
        scanf("%d", &aux);
        soma = aux + soma;
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
    
    return 0;
}