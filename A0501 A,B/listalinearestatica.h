#ifndef LISTALINEARESTATICA_H
#define LISTALINEARESTATICA_H

# define  MAX_ELEM  10
# define  POS_FINAL - 1
# define SIM 1
# define NAO 0

    struct Lista {
        int n;
        char elem [MAX_ELEM];
    };
    //A
    void  iniciarLista ( struct Lista *);
    char  acessar ( struct Lista, int );
    void  alterar ( struct Lista *, int , char );
    void inserir ( struct Lista *, int , char ); 
    void remover(struct Lista*, int); 
    void  concatenar ( struct Lista *, struct Lista *);
    struct Lista subLista ( struct Lista, int , int );
    void  inserirOrdenado ( struct Lista *, char );
    void  mostrarLista ( struct Lista);
    int  visualizar ( struct Lista * l, char seek, int data []);
    struct Lista intercalar ( struct Lista * lst1, struct Lista * lst2);
    void  ordemCrescente ( struct Lista * l);
   //B
    void  palindromo ( struct Lista l);
    int localizarNo(struct Lista* lst, char, int[]);//não consegui fazer funcionar
    struct Lista interLista(struct Lista*, struct Lista*); 
    void ordenar(struct Lista*);
    void removerIguais(struct Lista*);
#endif	// LISTALINEARESTATICA_H

