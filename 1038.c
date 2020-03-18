#include <stdio.h>

int main(){
    int i, q;
    float total;
    scanf("%d %d", &i, &q);
    if (i == 1)
    {
        total = q * 4.0;
        printf("Total: R$ %.2f\n", total);
    }
    else if (i == 2)
    {
        total = q * 4.50;
        printf("Total: R$ %.2f\n", total);
    }
    else if (i == 3)
    {
        total = q * 5.0;
        printf("Total: R$ %.2f\n", total);
    }
    else if (i == 4)
    {
        total = q * 2.0;
        printf("Total: R$ %.2f\n", total);
    }
    else
    {
        total = q * 1.50;
        printf("Total: R$ %.2f\n", total);
    }
    
    return 0;
}