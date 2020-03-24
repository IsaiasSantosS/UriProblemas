#include <stdio.h>

int main(){
    float num;
    int positivo = 0, i;
    for (i = 0; i < 6; i++)
    {
        scanf("%f", &num);
        if (num >= 0)
        {
            positivo++;
        }
        
    }
    printf("%d valores positivos\n", positivo);    
    return 0;
}