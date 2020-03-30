#include <stdio.h>

int main(){
   float p = 0, j = 1;
    while (p <= 2.1)
    {
        if (p == 0 || p == 1 || p>2){
            printf("I=%.0f J=%.0f\n", p, j+p);
            printf("I=%.0f J=%.0f\n", p, j+p+1);
            printf("I=%.0f J=%.0f\n", p, j+p+2);
        }else
        {
            printf("I=%.1f J=%.1f\n", p, j+p);
            printf("I=%.1f J=%.1f\n", p, j+p+1);
            printf("I=%.1f J=%.1f\n", p, j+p+2);
        }
        p = p + 0.2;
        
    }
    return 0;
} 