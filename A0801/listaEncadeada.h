#ifndef LISTAENCADEADA_H_INCLUDED
#define LISTAENCADEADA_H_INCLUDED

struct No{
    int dado;
    struct No *prox;
};

struct No2{
    int dado;
    struct No2 *prox;
    struct No2 *ant;
};

void inciarListaSimples();
void listarListaSimples();
void iniciarListaDupla();
void listarListaDupla();

#endif // LISTAENCADEADA_H_INCLUDED