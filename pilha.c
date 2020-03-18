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


void push(Pilha* p, char *v){
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->info = v;
    novo->prox = p->prim;
    p->prim =novo;
}

char pop(Pilha* p){
    Lista* l;
    char v[1];

    if(Vazia(p)){
        printf("Pilhar Vazia");
        exit(1);
    }

    l = p->prim;
    v[0] = l->info;
    p->prim = l->prox;
    free(l);
    return v[0];
}

