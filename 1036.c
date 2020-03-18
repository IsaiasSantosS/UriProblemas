#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c, delta, r1, r2;

    scanf("%lf %lf %lf", &a, &b, &c);

    delta = (b*b) - (4*a*c);

    if ((a != 0 ) && (delta > 0)) {
        r1 = ((b*-1) + pow(delta,0.5))/(2*a);
        r2 = ((b*-1) - pow(delta,0.5))/(2*a);

        printf("R1 = %.5f\nR2 = %.5f\n", r1, r2);
    }else{
        printf("Impossivel calcular\n");
    }
    
    return 0;
}
