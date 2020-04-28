#include <stdio.h>
int main(){
    int maior, menor, soma_aux;
    scanf("%d", &maior);
    scanf("%d", &menor);

    if (maior < menor) {
        soma_aux = maior;
        maior = menor;
        menor = soma_aux;
    }

    soma_aux = 0;
    menor = menor + 1;
    while (menor < maior)
    {
        if(menor == maior){
           break;
        }else{
            if ((menor%2) != 0)
            {
                soma_aux = menor + soma_aux;
            } 
            menor = menor + 1;
        }
    }
    
    printf("%d\n", soma_aux);

    return 0;
}