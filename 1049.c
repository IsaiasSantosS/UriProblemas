#include <stdio.h>
#include <string.h>

int main(){
    char textoA[12];
    char textoB[8];
    char textoC[10];

    scanf("%s", textoA);
    scanf("%s", textoB);
    scanf("%s", textoC);

    if (strcmp(textoA, "vertebrado") == 0){
        if (strcmp(textoB,"ave") == 0){
            if (strcmp(textoC,"carnivoro")==0){
                printf("aguia\n");
            }else{
                printf("pomba\n");
            }
        }else{
            if (strcmp(textoC,"onivoro")==0){
                printf("homem\n");
            }else{
                printf("vaca\n");
            }  
        }
    }else{
        if (strcmp(textoB,"inseto")==0){
            if (strcmp(textoC,"hematofago")==0){
                printf("pulga\n");
            }else{
                printf("lagarta\n");
            }
        }else{
            if (strcmp(textoC,"hematofago")==0){
                printf("sanguessuga\n");
            }else{
                printf("minhoca\n");
            }  
        }
    }
    
}