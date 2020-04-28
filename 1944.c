#include <stdio.h>
#include <stdlib.h>

typedef struct lista
{
    char info;
    struct  lista* prox;    
} Lista;


typedef struct pilha{
    Lista* prim;
} Pilha;

Pilha* cria(void){
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    p->prim = NULL;
    return p;
}

int Vazia (Pilha* p)
{
    return (p->prim==NULL);
}


void push(Pilha* p, char v){
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->info = v;
    novo->prox = p->prim;
    p->prim =novo;
}

char pop(Pilha* p){
    Lista* l;
    char v;

    if(Vazia(p)){
        printf("Pilhar Vazia");
        exit(1);
    }

    l = p->prim;
    v = l->info;
    p->prim = l->prox;
    free(l);
    return v;
}

int main(){
    int i, jogador, ganhadores=0, ganhou;
   char l1,l2,l3,l4;
   char k1,k2,k3,k4;
   
   scanf("%d", &jogador);
 
   Pilha* p;
   p = cria(); 
 
 while (jogador > 0) {
   ganhou = 0; 

   scanf(" %c", &l1);
   scanf(" %c", &l2);
   scanf(" %c", &l3);
   scanf(" %c", &l4);

   if(Vazia(p)){
    push(p, 'F');
    push(p, 'A');
    push(p, 'C');
    push(p, 'E');
   }

    k1 = pop(p);
    if (k1 == l1){
        k2 = pop(p);
        if (k2 == l2){
            k3 = pop(p);
            if (k3 == l3){
                k4 = pop(p);
                if (k4 == l4){
                    ganhou = 1;
                    ganhadores++;
                }else
                {
                    push(p, k4);    
                    push(p, k3);
                    push(p, k2);
                    push(p, k1);
                }
                
            }else
            {
                push(p, k3);
                push(p, k2);
                push(p, k1);
            }
            
        }else
        {
           push(p, k2);
           push(p, k1);
        }
        
    } else
    {
        push(p, k1);
    }

    if (ganhou == 0){
        push(p, l1);
        push(p, l2);
        push(p, l3);
        push(p, l4);
    }

   jogador--;
}

printf("%d\n", ganhadores);
}