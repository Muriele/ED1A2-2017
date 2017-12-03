#ifndef FILAESTATICA1_H_INCLUDED
#define FILAESTATICA1_H_INCLUDED

#define SIM 1
#define NAO 0
#define SUCESSO 0 
#define MAX_ELEM 10 
#define FILA_VAZIA -1      
#define FILA_CHEIA -2 
#define ELEM_NULO 0 


struct Fila{
    int tamanho; 
    char elem[MAX_ELEM]; 
};


int vazia(struct Fila); 
int cheia(struct Fila); 
void iniciarFila(struct Fila*); 
char obterInicio(struct Fila);
void listarElementos(struct Fila);
int inserir(struct Fila*, char); 
char remover(struct Fila*); 


#endif // FILAESTATICA1_H_INCLUDED