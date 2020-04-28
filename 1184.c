#include <stdio.h>
int main(){
    float m[12][12], total = 0;
    char t;
    int i, j;
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
        for (j = 0; j < 12; j++)
        {
            if (i > j) {
                total = total + m[i][j];
            }
        }        
    }
    if (t == 'S')
    {
        printf("%.1f\n", total);
    }else if (t == 'M')
    {
        printf("%.1f\n", (total/66.0));
    } 
    return 0;
}