#include <stdio.h>
 
int main() {
 
    int n, i, contador;
    scanf("%d", &n);
    n = n * 4;
    for (i = 1; i <= n; i++)
    {
        if (i % 4 != 0)
        {
            printf("%d ", i);
        }
        else
        {
            printf("PUM\n");
        }
    }
    return 0;
}