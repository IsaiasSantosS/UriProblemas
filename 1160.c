#include <stdio.h>
#include <math.h>
int main(){
    int t, pa, pb, i, cont;
    float  g1, g2;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d %d %f %f", &pa, &pb, &g1, &g2);
        cont = 0;
        while ((pa <= pb) && (cont <= 100))
        {
            pa = floor(pa * (1+(g1/100)));
            pb = (pb * (1+(g2/100)));
            cont++;
        }
        if (cont > 100) {
            printf("Mais de 1 seculo.\n", cont);
        }else{
            printf("%d anos.\n", cont);
        }
    }   
    return 0;
}