#include <stdio.h>
#include <stdlib.h>

int main(){
    float a,b,c;
    scanf("%f %f %f", &a, &b, &c);
    if (
        ((abs(b - c) < a) && (a < (b+c))) &&
        ((abs(a - c) < b) && (b < (a+c))) &&
        ((abs(b - a) < c) && (c < (b+a)))
        )
    {
        printf("Perimetro = %.1f\n", (c + b + a));
    }else
    {
        printf("Area = %.1f\n", (((a+b)*c)/2));
    }
       
    return 0; 
}