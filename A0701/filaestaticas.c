
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "filasestaticas.h" 



int vazia(struct Fila q){
    if (q.tamanho == 0){
        printf("Sim!\n");
        return SIM;
    }
    printf("Naoo\n");
    return NAO;
}



int cheia(struct Fila q){
    if (q.tamanho == MAX_ELEM){
        printf("Sim!\n");
        return SIM;
    }
    printf("Nao!\n");
    return NAO;
}



void iniciarFila(struct Fila* q){
    int i;

    for(i=0; i<MAX_ELEM; i++){
        q->elem[i] = ELEM_NULO; // elemento nulo em cada elemento da fila
    }
    q->tamanho=0; // tamanho com zero .
}



char obterInicio(struct Fila q){
    char dado = ELEM_NULO;

    if (!vazia(q)) //  não está vazia
        dado = q.elem[0]; // elemento da posição zero
    return printf("O elemento do inicio eh %c", dado);
}



int inserir(struct Fila* q, char e){
    if(!cheia(*q)){
        // se não estiver cheia
        q->elem[q->tamanho] = e; // insere no final da Fila
        q->tamanho++;
    }else
        return FILA_CHEIA;
    return SUCESSO;
}


void listarElementos(struct Fila q){
    int i; //  percorrer e ir listando

    if(vazia(q))
        printf("Impossivel listar! Fila vazia!\n");
    else{
        printf("\n\n --- CONTEUDO DA FILA --- \n\n");
        for(i=0; i<q.tamanho; i++)
            printf("\n[%i] = %c", i, q.elem[i]);
    }
}



char remover(struct Fila* q){
    int i;
    char e = ELEM_NULO;
    e = obterInicio(q); // mostra qual elemento está no início
    if (e != ELEM_NULO){ // se obteve elemento é porque existe pelo menos um
        for(i=0; i<(q->tamanho-1); i++) // muda elementos para outra posição...
            q->elem[i] = q->elem[i+1]; //...  A fila anda.
        q->elem[q->tamanho-1] = ELEM_NULO; // limpa a célula onde esta o último
        q->tamanho--; //atualiza o tamanho
    }
    return e;
}

