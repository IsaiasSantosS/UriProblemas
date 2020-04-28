#include <stdio.h>
int main(){
    int x[10], i, n;
    scanf("%d", &n);
    x[0] = n;
    printf("N[%d] = %d\n", 0, x[0]);
    for (i = 1; i < 10; i++)
    {
        x[i] = x[i-1] * 2;
        printf("N[%d] = %d\n", i, x[i]);
    }
    return 0;
}