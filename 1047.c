#include <stdio.h>

int main(){
    int hi, mi, hf, mf, totalHora, totalMin;
    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

    totalMin = ((hf * 60) + mf) - ((hi * 60) + mi);

    if (totalMin > 0){
        totalHora = totalMin / 60;
        totalMin = totalMin % 60;
    }else if (totalMin < 0){
        totalMin = 1440 + totalMin;
        totalHora = totalMin / 60;
        totalMin = totalMin % 60;
    } else {
        totalHora = 24;
        totalMin = 0;
    }
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", totalHora, totalMin);

    return 0;
}