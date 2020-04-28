#include <stdio.h>
int main(){
    int num, i;
    scanf("%d", &num);
    if ((num%2)==0)
    {
        num = num+1;
    }    
    for (i = 0; i < 6; i++)
    {
        printf("%d\n",num);
        num = num+2;
    }
    return 0;
}