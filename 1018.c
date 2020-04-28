#include <stdio.h>

int main(){
    int valor, cem, cin, vin, dez, cinc, dois, um;
    scanf("%d", &valor);
    cem = valor/100;
    cin = (valor-(100*cem))/50;
    vin = (valor-(100*cem)-(50*cin))/20;
    dez = (valor-(100*cem)-(50*cin)-(20*vin))/10;
    cinc= (valor-(100*cem)-(50*cin)-(20*vin)-(10*dez))/5;
    dois= (valor-(100*cem)-(50*cin)-(20*vin)-(10*dez)-(5*cinc))/2;
    um  = (valor-(100*cem)-(50*cin)-(20*vin)-(10*dez)-(5*cinc)-(2*dois));

    printf("%d\n", valor);
    printf("%d nota(s) de R$ 100,00\n", cem);
    printf("%d nota(s) de R$ 50,00\n", cin);
    printf("%d nota(s) de R$ 20,00\n", vin);
    printf("%d nota(s) de R$ 10,00\n", dez);
    printf("%d nota(s) de R$ 5,00\n", cinc);
    printf("%d nota(s) de R$ 2,00\n", dois);
    printf("%d nota(s) de R$ 1,00\n", um);

    return 0;
}