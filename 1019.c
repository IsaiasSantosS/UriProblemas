#include <stdio.h>

int main(){
    int valor, horas, min, seg;
    scanf("%d", &valor);
    horas = valor/3600;
    min = (valor%3600)/60;
    seg = valor%60;
    printf("%d:%d:%d\n", horas, min, seg);
    return 0;
}