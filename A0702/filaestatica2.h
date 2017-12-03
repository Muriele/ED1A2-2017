#ifndef FILAESTATICA2_H_INCLUDED
#define FILAESTATICA2_H_INCLUDED

#define SIM 1
#define NAO 0
#define SUCESSO 0 
#define FILA_CHEIA 1
#define MAX_ELEM 10 
#define FILA_VAZIA -1                
#define ELEM_NULO 0 


struct Fila{
    int inicio; 
    int fim; 
    char elem[MAX_ELEM]; 
};


int vazia(struct Fila); 
int cheia(struct Fila); 
void iniciarFila(struct Fila*); 
char obterInicio(struct Fila);
void listarElementos(struct Fila);
int inserir(struct Fila*, char); 
char remover(struct Fila*); 
int tamanho(struct Fila); 

#endif // FILAESTATICA2_H_INCLUDED