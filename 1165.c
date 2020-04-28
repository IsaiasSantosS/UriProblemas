#include <stdio.h>
int main(){
    int n, p, i, j,primo;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &p);
        primo = 0;
        for ( j = 2; j <= p; j++)
        {
            if (((p%j)==0) && (p != j)){
                primo = 1;
                break;
            }
        }
        if ((primo != 0) || (p==1)) {
            printf("%d nao eh primo\n", p);
        }else{
            printf("%d eh primo\n", p);
        }
        
    }
    
    
    return 0; 
}