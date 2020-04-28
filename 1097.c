#include <stdio.h>

int main(){
    int p = 1, j = 7;
    while (p <= 9)
    {
        printf("I=%d J=%d\n", p, j);
        printf("I=%d J=%d\n", p, j-1);
        printf("I=%d J=%d\n", p, j-2);
        p = p + 2;
        j = j + 2;
    }
    return 0;
}