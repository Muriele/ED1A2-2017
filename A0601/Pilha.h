
#ifndef PILHA_H
#define PILHA_H


#define SIM 1 
#define	NAO 0
#define SUCESSO 0
#define MAX_ELEM 10
#define PILHA_VAZIA -1
#define PILHA_CHEIA -2


struct Pilha{
    int topo;
    char elem [MAX_ELEM];
};

void iniciarPilha(struct Pilha);
int inserir (struct Pilha*,char);
int palindromo (struct Pilha);







#endif	// PILHA_H

