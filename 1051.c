#include <stdio.h>

int main(){
    float salario, imposto;    
    scanf("%f", &salario);

    if(salario <= 2000){
        imposto = 0;
    }else if((salario > 2000) && (salario <=3000)){
        imposto = ((salario - 2000) * 0.08);
    }else if((salario > 3000) && (salario <=4500)){
        imposto = ((salario - 3000) * 0.18) + 80;
    }else{
        imposto = ((salario - 4500) * 0.28) + 350;
    }

    if (imposto == 0)
    {
        printf("Isento\n");
    }
    else
    {
        printf("R$ %.2f\n", imposto);
    }
    
}