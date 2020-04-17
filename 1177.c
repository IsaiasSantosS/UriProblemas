#include <stdio.h>
int main(){
    int t,i,m = 0, n[1000];
    scanf("%d", &t);
    for (i = 0; i < 1000; i++)
    {
        if (m == t) {
            m = 0;
        }
        n[i] = m;
        m++;
    }
    for (i = 0; i < 1000; i++)
    {
        printf("N[%d] = %d\n", i, n[i]);
    }
    
    return 0;
}