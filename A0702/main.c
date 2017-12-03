#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "filaestatica2.h"

int main(int argc, char** argv){
    struct Fila filaCir; 
    int op;
    char c; // pra inserir novo elemnto ou remover o início

    do{    
        printf("1- Iniciar uma fila\n"); 
        printf("2- Inserir um elemento na fila\n"); 
        printf("3- Remover um elemento da fila COM FALHA\n");
        printf("4- Obter o inicio da fila\n");
        printf("5- Verificar se a fila esta vazia\n"); 
        printf("6- Verificar se a fila esta cheia\n"); 
        printf("7- Listar os elementos da fila\n");
        printf("8- Conhecer a quantidade de elementos\n"); 
        printf("9- Finalizar programa\n\n");
        scanf("%d", &op);
        switch(op){
            case 1:
                iniciarFila(&filaCir);
                printf("\nA fila foi iniciada!\n");
                break;
            case 2:
                inserir(&filaCir, 'C');
                inserir(&filaCir, 'I');
                inserir(&filaCir, 'R');
                inserir(&filaCir, 'C');
                inserir(&filaCir, 'U');
                inserir(&filaCir, 'L');
                listarElementos(filaCir);
                break;
            /*case 3:
                remover(&filaCir);
                listarElementos(filaCir);
                break; */
            case 4:
                obterInicio(filaCir);
                break;
            case 5:
                printf("\nA fila estah vazia?\n");
                vazia(filaCir);
                break;
            case 6:
                printf("\nA fila estah cheia?\n");
                cheia(filaCir);
                break;
            case 7:
                listarElementos(filaCir);
                break;
            case 8:
                tamanho(filaCir);
                break;
            case 9:
                printf("\nPrograma Encerrado!");
                break;
        }
    }while(op!=9);
    return 0;
}