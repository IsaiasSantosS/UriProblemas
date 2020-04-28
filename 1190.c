#include <stdio.h>
int main(){
    double m[12][12], total = 0;
    char t;
    int i, j;
    scanf(" %c", &t);
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%lf", &m[i][j]);
        }
    }
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            if ((i > (12-1-j)) && (i < j))
            {
                total = total + m[i][j];
            }
        }        
    }
    if (t == 'S')
    {
        printf("%.1lf\n", total);
    }else if (t == 'M')
    {
        printf("%.1lf\n", (total/30.0));
    } 
    return 0;
}