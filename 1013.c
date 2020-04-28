#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,c,b, m1, m2, mt;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    m1 = (a+b+abs(a-b))/2;
    m2 = (b+c+abs(b-c))/2;
    mt = (m1+m2+abs(m1-m2))/2;

    printf("%d eh o maior\n", mt);

    return 0;
}