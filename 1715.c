#include <stdio.h>

int main(){
    int n,m, i,j,nj=0, sg=0;

    scanf("%d", &n);
    scanf("%d", &m);

    if ((n >= 1 && n <= 100) && (m >= 1 && m <= 100)){
        int matriz[n][m];

        for ( i = 0; i < n; i++)
        {
            for ( j = 0; j < m; j++)
            {
                scanf("%d", &matriz[i][j]);
            }
        }

        for ( i = 0; i < n; i++)
        {
            for ( j = 0; j < m; j++)
            {
               if (matriz[i][j] == 0){
                   sg++;
                   break;
               }
            }
        }
        nj = n - sg;
        printf("%d\n", nj);
    }
    return 0;
}