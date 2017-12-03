#include "listalinearestatica.h"
#include <stdio.h>
#include <stdlib.h>


/* A */

void  iniciarLista ( struct Lista * lst) {
    int i;
    lst -> n = 0 ;
    for (i = 0 ; i < MAX_ELEM; i++){
        lst -> elem [i] = 0 ;
    }
}

char  acessar ( struct Lista lst , int k) {
    char dado = 0 ;
    if ((k < 0 || k> (lst. n - 1 ))){
        printf( " \n Erro ao acessar - Lista vazia ou índice fora dos limites " );
    } else {
        dado = lst. elem [k];
    }
    return dado;
}

void  alterar ( struct Lista * lst, int k, char dado) {
    if ((k < 0 || k> (lst-> n - 1 ))){
        printf( " \n Erro ao acessar - Lista vazia ou índice fora dos limites " );
    } else {
        lst-> elem [k] = dado;
    }
}

void  inserir ( struct Lista * lst, int k, char dado){
    int i;
    if (lst -> n  = MAX_ELEM){
        printf( " \n Erro ao inserir - Lista Cheia! " );
    } else {
        if (k == POS_FINAL || lst-> n == 0 || k == lst-> n){
            lst-> elem [lst-> n] = dado;
            lst-> n ++;
        } else {
            if ((k < 0 || k> (lst-> n - 1 ))){
                printf( " \n Erro ao acessar - Lista vazia ou índice fora dos limites " );
            } else {
                for (i = lst-> n; i> k; i--) {
                    lst -> elem [i] = lst-> elem [i- 1 ];
                }
                lst-> elem [k] = dado;
                lst-> n ++;
            }
        }
    }
}


void remover(struct Lista* lst, int k){
    int i;
    if(k==POS_FINAL){ // se a posição é a final
        lst->elem[(lst->n)-1]=0; // o valor da posição ganha valor zero, fica nulo.
        lst->n--; // decrementa a quantidade n
    }else{
        if(k<0 || k>(lst->n-1)){ // testa se está fora dos limites
            printf("\nErro ao remover - Lista vazia ou indice fora dos limites!\n");
        }else{ //
            for(i=k; i<lst->n; i++){ // vai trazendo os elementos de traz pra frente
                lst->elem[i]=lst->elem[i+1]; // pra irem ocupando a casa anterior
            }
            lst->n--; // atualiza a quantidade n
            lst->elem[lst->n]=0; // atribui valor nulo para a última casa
        }
    }
}

void  concatenar ( struct Lista * lst1, struct Lista * lst2) {
    int i, limite ;
    if ((lst1-> n + lst2-> n) <= MAX_ELEM)
        limite = lst2 -> n;
    else
        limite = MAX_ELEM - lst1 -> n;
    for (i = 1 ; i <= limite; i ++) {
        lst1 -> elem [lst1-> n] = lst2-> elem [i- 1 ];
        lst1-> n ++;
    }
}


struct Lista subLista ( struct Lista lst, int k, int n) {
    struct Lista result;
    int i;
    int limite;
    iniciarLista(&result);
    if ((k < 0 || k> (MAX_ELEM - 1 ))) {
        printf( " \n Erro ao definir sublista - origem vazia ou inexistente " );
    } else {
        if ((k + n) <= MAX_ELEM)
            limite = n;
        else
            limite = MAX_ELEM - k;
        for (i = 1 ; i <= limite; i ++){
            inserir(&result, POS_FINAL, lst. elem [k]);
            k ++;
        }
    }
    return result ;
}

void  inserirOrdenado ( struct Lista * lst, char e){
    int k = 0 ;
    while ((e >= lst -> elem [k]) && (k <lst -> n)){
        k ++;
    }
    inserir (lst, k, e);
}

void  mostrarLista ( struct Lista lst ){
    int k;
    printf (" \nLista\n " );
    for (k = 0 ; k <(lst. n ); k ++) {
        printf( " \n L [ % d ] = % c " , k, lst. elem [k]);
    }
}
/* B */ 

int  visualizar ( struct Lista * l, char seek, int dados []) {
    int i, m = 0 ;
    if (l-> n == 0 ) {
        printf ( " \n Erro ao encontrar , uma lista pode estar vazia " );
    } else {
        for (i = 0 ; i <l-> n; i ++) {
            if (l-> elem [i] == seek){
                dados[m] = i;
                m ++;
            }
        }
    }
    return m;
}

struct Lista intercalar ( struct Lista * lst1, struct Lista * lst2) {
    struct Lista resultado;
    iniciarLista (&resultado);
    int idx, idx1, idx2;
    for (idx = 0 , idx1 = 0 , idx2 = 0 ; idx1 <lst1 -> n && idx2 <lst2-> n; idx = idx + 2 ) {
        inserir (&resultado, idx, lst1-> elem [idx1]);
        inserir (&resultado, idx + 1 , lst2-> elem [idx2]);
        idx1 ++;
        idx2 ++;
    }
    while (idx1 <lst1-> n) {
        inserir (& resultado, idx, lst1-> elem [idx1]);
        idx ++;
        idx1 ++;
    }
    while (idx2 <lst2-> n) {
        inserir (& resultado, idx, lst2-> elem [idx2]);
        idx ++;
        idx2 ++;
    }
    return resultado;
    
    
}

void inverter(struct Lista* lst){
    int i;
    char aux;
    for (i=0; i<(lst->n-1)/2; i++){
    //para otimiziar o cod. usando a metade de operações que usaria percorre a litsa toda do começo ao fim
        aux = lst->elem[i];//aux índice é i
        lst->elem[i] = lst->elem[lst->n - (i+1)];
        //é pra percorrer o indice de tras pra frente
        lst->elem[lst->n - (i+1)] = aux;
        // o elemento que foi mexido por último
        //recebe o que estava guardado no aux
    }
}


void  ordemCrescente ( struct Lista * l) {
    int i;
    char aux;
    for ( int x = 0 ; x <l-> n; x ++) {
        for ( int y = x + 1 ; y <l-> n; y ++) {
            if (l-> elem [x]> l-> elem [y]) {
                aux = l-> elem [x];
                l-> elem [x] = l-> elem [y];
                l-> elem [y] = aux;
            }
        }
    }
}

/* C */

int palindromo(struct Lista lta){
    struct Lista lst2;
    int i;
    int r = SIM;
    
    iniciarLista(&lst2);

    for(i=lta.n-1; i >= 0; i--)
        lst2.elem[lst2.n++] = lta.elem[i];
    i =0;
  
    while(r == SIM && i < lta.n){
        if(lta.elem[i] == lst2.elem[i])
            i++;
        else
            r = NAO;
    }   
    return r;



    if (palindromo(lta) == SIM){
       printf("\n\nE palindromo!");
    }else{ 
        printf("\n\nNao e palindromo!"); 
     }      
}