#include <stdio.h>

int main(){
    int i;
    double n[100];
    scanf("%lf", &n[0]);
    
    for (i = 1; i < 100; i++)
    {
        n[i] = n[i-1] / 2.0;
    }
    for (i = 0; i < 100; i++)
    {
        printf("N[%d] = %.4f\n", i, n[i]);
    }
    return 0;
}