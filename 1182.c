#include <stdio.h>
int main(){
    float m[12][12], total = 0;
    char t;
    int l, i, j;
    scanf("%d", &l);
    scanf(" %c", &t);
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%f", &m[i][j]);
        }
    }
    for (i = 0; i < 12; i++)
    {
        total = total + m[i][l];
    }
    if (t == 'S')
    {
        printf("%.1f\n", total);
    }else if (t == 'M')
    {
        printf("%.1f\n", (total/12.0));
    } 
    return 0;
}