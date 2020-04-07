#include <stdio.h>

int main(){
  int n, i, anterior = 0, proximo = 1, aux;
  scanf("%d", &n);

   if (n == 1) { printf("0\n"); }
   else if (n == 2) { printf("0 1\n");}
   else{ printf("0 1 "); }


  for (i = 3; i <= n; i++)
  {
    if (i == n)
    {
      printf("%d\n", (anterior+proximo));
    }else
    {
      printf("%d ", (anterior+proximo));
      aux = proximo;
      proximo = (anterior+proximo);
      anterior = aux;
    }        
  }    
}