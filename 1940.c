#include <stdio.h>

int main(){
    int i, j ,jogador, rodada, ganhador = 0, pontos = 0, total = 0;
    
    scanf("%d", &jogador);
    scanf("%d", &rodada);

    int jogo[jogador][rodada];

    for (i = 0; i < jogador; i++)
    {
        for ( j = 0; j < rodada; j++)
        {
            scanf("%d", &jogo[i][j]);
        }
        
    }

    for (i = 0; i < jogador; i++)
    {
        pontos = 0;
        for ( j = 0; j < rodada; j++)
        {
            pontos = pontos + jogo[j][i];
        }
        if ((pontos >= total) && (pontos > 0)){
            ganhador = i+1;
            total = pontos;
        }        
    }

    printf("%d\n",ganhador);

    return 0;
}