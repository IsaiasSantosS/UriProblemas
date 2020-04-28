#include <stdio.h>

int main(){
    int p = 1, j = 60;
    while (j >= 0)
    {
        printf("I=%d J=%d\n", p, j);
        p = p + 3;
        j = j - 5;
    }
    return 0;
}