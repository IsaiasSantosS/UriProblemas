#include <stdio.h>
int main(){
    int n, i,j, par[5], impar[5], conpar = 0, conimpar = 0;
    for (i = 0; i < 15; i++)
    {
        scanf("%d", &n);
        if (n%2 == 0)
        {
            par[conpar] = n;
            conpar++;
        }else{
            impar[conimpar] = n;
            conimpar++;
        }
        if (conpar > 4){
            for (j = 0; j < conpar; j++)
            {
                printf("par[%d] = %d\n", j, par[j]);
            }
            conpar = 0;
            
        }else if (conimpar > 4){
            for (j = 0; j < conimpar; j++)
            {
                printf("impar[%d] = %d\n", j, impar[j]);
            }
            conimpar = 0;           
        }else if(i == 14){
            for (j = 0; j < conimpar; j++)
            {
                printf("impar[%d] = %d\n", j, impar[j]);
            }
            for (j = 0; j < conpar; j++)
            {
                printf("par[%d] = %d\n", j, par[j]);
            }
        }
    }
    return 0;
}