#include <stdio.h>
int fatorial(int n){
    if (n == 0){
        return 1;
    }else
    {
       n = n * fatorial(n-1);
       return n;
    }
    
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", fatorial(n));
}