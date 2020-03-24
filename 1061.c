#include <stdio.h>

int main(){
    int ih, im, is, idia, fh, fm, fs, fdia, totalseg;
    char aux[4];
    scanf("%s %d",aux, &idia);
    scanf("%d : %d : %d", &ih,&im,&is);
    scanf("%s %d",aux, &fdia);
    scanf("%d : %d : %d", &fh,&fm,&fs);

    totalseg = ((fh * 3600) + (fm * 60) + fs) - ((ih * 3600) + (im * 60) + is);

    if (totalseg > 0){
        ih = totalseg / 3600;
        im = (totalseg % 3600) / 60;
        is = (totalseg % 3600) % 60;
        idia = fdia - idia;
    }else if (totalseg < 0){
        totalseg = 86400 + totalseg;
        ih = totalseg / 3600;
        im = (totalseg % 3600) / 60;
        is = (totalseg % 3600) % 60;
        idia = fdia - idia - 1;
    } else {
        ih = 0;
        im = 0;
        is = 0;
        idia = fdia - idia;
    }
    
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",idia, ih, im, is);
    return 0;
}