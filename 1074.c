#include <stdio.h>
int main(){
    int num, i, num1;
    scanf("%d", &num);
    for ( i = 0; i < num ; i ++)
    {
      scanf("%d", &num1);
      if ((num1%2 == 0) && (num1 != 0))
      {
          printf("EVEN ");
      }else if(num1 != 0)
      {
          printf("ODD ");
      }
      
      if (num1  < 0)
      {
          printf("NEGATIVE\n");
      }else if (num1  > 0)
      {
          printf("POSITIVE\n");
      }else
      {
          printf("NULL\n");
      }
    }    
    return 0;
}