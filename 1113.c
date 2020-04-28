#include <stdio.h>
int main(){
    int m, n;
    do
    {
        scanf("%d %d", &m, &n);
        if (m > n) {
            printf("Decrescente\n");
        }else if (m < n) {
            printf("Crescente\n");
        }
    } while (m != n);
}