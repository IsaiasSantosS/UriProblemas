#include <stdio.h>
int main(){
    int x,y,n, i;
    float result;
    scanf("%d", &n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);
        if(y != 0){
            result = x / (float) y;
            printf("%.1f\n", result);
        }else
        {
            printf("divisao impossivel\n");
        }
        
    }
    
    return 0;
}