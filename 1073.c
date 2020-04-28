#include <stdio.h>
#include <math.h>
int main(){
    int num, i, r;
    scanf("%d", &num);
    for ( i = 2; i <= num ; i += 2)
    {
        r = pow(i, 2);
        printf("%d^2 = %d\n", i, r);
    }    
    return 0;
}