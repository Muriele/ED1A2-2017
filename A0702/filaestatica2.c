#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "filaestatica2.h" 


int vazia(struct Fila q){
    if (q.inicio == FILA_VAZIA){
        printf("Sim!\n");
        return SIM;
    }
    printf("Nao!\n");
    return NAO;
}

int cheia(struct Fila q){
    if((q.inicio == 0 && q.fim == MAX_ELEM-1) || (q.inicio == q.fim+1)){
        printf("Sim!\n");
        return SIM;
    }
    printf("Nao!\n");
    return NAO;
}

void iniciarFila(struct Fila* q){
    int i;

    for(i=0; i<MAX_ELEM; i++){
        q->elem[i] = 0; // atribui elemento nulo
    }
    q->fim=FILA_VAZIA; 
    q->inicio=FILA_VAZIA; 
}

char obterInicio(struct Fila q){
    char dado = 0;

    if (!vazia(q)) 
        dado = q.elem[q.inicio]; 
    return printf("O elemento do inicio eh %c", dado);
}

int inserir(struct Fila* q, char e){
    if(!cheia(*q)){ 
        q->fim = (q->fim+1)%MAX_ELEM; 
        q->elem[q->fim] = e; 
    }else
        return FILA_CHEIA;
    return SUCESSO;
}

void listarElementos(struct Fila q){
    int i; 
    int ordem;

    if(vazia(q)) 
        printf("Impossivel listar! Fila vazia!\n");
    else{
        printf("\n\n --- CONTEUDO DA FILA --- \n\n");
        ordem = 1; //???
        for(i=q.inicio; i!=q.fim; i=((i+1)%MAX_ELEM)){ // for com circularidade
            printf("\n %i° = %c", ordem, q.elem[i]);
            ordem++;
        }
    }
}

int tamanho(struct Fila q){
    if(q.inicio <= q.fim)
        return q.fim-q.inicio+1;
    return ((MAX_ELEM-q.inicio)+(q.fim+1));
}