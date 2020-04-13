#include <stdio.h>
int main(){
    float s = 1, impar = 3, par = 2;
    int i;
    for (i = 1; i <= 100; i++)
    {
        s = s + (impar/ par);
        impar = impar + 2;
        par = par * 2;
    }
    printf("%.2f\n", s);
    return 0;
}