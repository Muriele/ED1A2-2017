#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "filasestaticas.h"

int main(int argc, char** argv){
    struct Fila filas; 
    int op;
    char c; //inserir um dado novo ou remover o início

    do{
        printf("1- Inicia uma fila\n"); 
        printf("2- Insere um elemento na fila\n"); 
        printf("3- Remove um elemento da fila\n"); 
        printf("4- Obtem o inicio da fila\n");
        printf("5- Verifica se a fila esta vazia\n"); 
        printf("6- Verifica se a fila esta cheia\n"); 
        printf("7- Lista os elementos da fila\n");
        printf("8- Fim\n\n");
        scanf("%d", &op);
        switch(op){
            case 1:
                iniciarFila(&filas);
                printf("\niniciada!\n");
                break;
            case 2:
                inserir(&filas, 'R');
                inserir(&filas, 'U');
                inserir(&filas, 'E');
                inserir(&filas, 'M');
                inserir(&filas, 'E');
                listarElementos(filas);
                break;
            case 3:
                remover(&filas);
                listarElementos(filas);
                break;
            case 4:
                obterInicio(filas);
                break;
            case 5:
                printf("\nA fila estah vazia?\n");
                vazia(filas);
                break;
            case 6:
                printf("\nA fila estah cheia?\n");
                cheia(filas);
                break;
            case 7:
                listarElementos(filas);
                break;
            case 8:
                printf("\nPrograma Encerrado!");
                break;
        }
    }while(op!=8);
    return 0;
}