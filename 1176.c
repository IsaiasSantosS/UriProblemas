#include <stdio.h>
int main(){
    long long int f[61];
    int i, n, x;
    f[0] = 0;
    f[1] = 1;
    for ( i = 2; i < 61; i++)
    {
        f[i] = f[i-1] + f[i-2];
    }
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);
        printf("Fib(%d) = %lld\n", x, f[x]);
    }
    
    return 0;
}