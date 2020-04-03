#include <stdio.h>
 
int main() {
 
    int n, alcool = 0, gasolina = 0, diesel = 0;
    do
    {
        scanf("%d", &n);
        switch (n)
        {
        case 1: alcool++; break;
        case 2: gasolina++; break;
        case 3: diesel++; break;        
        }
    } while (n != 4);
    puts("MUITO OBRIGADO");
    printf("Alcool: %d\nGasolina: %d\nDiesel: %d\n", alcool, gasolina, diesel);
    
    return 0;
}