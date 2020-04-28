#include <stdio.h>
 int main(){
     int h, km;
     float total;
     scanf("%d", &h);
     scanf("%d", &km);
     total = (km/12.0) * h;
     printf("%.3f\n", total);
     return 0;
 }