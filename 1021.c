#include <stdio.h>

int main(){
    float valor;
    int cem, cin, vin, dez, cinc, dois,
    um, mcin, mvci, mdez, mcinc, mum;
    scanf("%f", &valor);
    valor = valor + 0.001;
    //notas
    cem = valor/100;
    cin = (valor-(100*cem))/50;
    vin = (valor-(100*cem)-(50*cin))/20;
    dez = (valor-(100*cem)-(50*cin)-(20*vin))/10;
    cinc= (valor-(100*cem)-(50*cin)-(20*vin)-(10*dez))/5;
    dois= (valor-(100*cem)-(50*cin)-(20*vin)-(10*dez)-(5*cinc))/2;
    
    //modas
    um  = (valor-(100*cem)-(50*cin)-(20*vin)-(10*dez)-(5*cinc)-(2*dois)/1);
    valor = valor - ((100*cem)+(50*cin)+(20*vin)+(10*dez)+(5*cinc)+(2*dois)+um);
    
    mcin  = valor/0.50;
    mvci  = (valor-(mcin*0.50))/0.25;
    mdez  = (valor-(mcin*0.50)-(mvci*0.25))/0.10;
    mcinc = (valor-(mcin*0.50)-(mvci*0.25)-(mdez*0.10))/0.05;
    mum   = (valor-(mcin*0.50)-(mvci*0.25)-(mdez*0.10)-(mcinc*0.05))/0.01;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", cem);
    printf("%d nota(s) de R$ 50.00\n", cin);
    printf("%d nota(s) de R$ 20.00\n", vin);
    printf("%d nota(s) de R$ 10.00\n", dez);
    printf("%d nota(s) de R$ 5.00\n", cinc);
    printf("%d nota(s) de R$ 2.00\n", dois);
    //modeas
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", um);
    printf("%d moeda(s) de R$ 0.50\n", mcin);
    printf("%d moeda(s) de R$ 0.25\n", mvci);
    printf("%d moeda(s) de R$ 0.10\n", mdez);
    printf("%d moeda(s) de R$ 0.05\n", mcinc);
    printf("%d moeda(s) de R$ 0.01\n", mum);

    return 0;
}