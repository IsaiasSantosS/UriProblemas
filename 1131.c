#include <stdio.h>
int main(){
    int inter = 0 , gremio = 0, empates = 0, total = 0, golsInter, golsGremio, n;
    do
    {
        total++;
        scanf("%d %d", &golsInter, &golsGremio);
        if (golsInter > golsGremio) { inter++; }
        else if (golsInter < golsGremio) { gremio++; }
        else { empates++;}        
        puts("Novo grenal (1-sim 2-nao)"); 
        scanf("%d", &n);
    } while (n == 1);

    printf("%d grenais\n", total);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", empates);
    if (inter > gremio)
    {
        puts("Inter venceu mais");
    }else if (inter > gremio)
    {
        puts("Gremio venceu mais");
    }else
    {
        puts("Nao houve vencedor");
    }
    
         
}