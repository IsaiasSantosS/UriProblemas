#include <stdio.h>

int main(){
    int f,h;
    float sh, st;

    scanf("%d", &f);
    scanf("%d", &h);
    scanf("%f", &sh);

    st = sh * h;

    printf("NUMBER = %d\nSALARY = U$ %.2f\n", f, st);

    return 0;
}