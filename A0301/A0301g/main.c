/*
 * Elabore um programa que solicite o preenchimento de duas matrizes de ordem 3
 *  com valores inteiros. Em seguida o programa deve solicitar o sinal de uma 
 * operação a ser realizada com as matrizes ( +,  -ou X ). Conforme a operação 
 * selecionada, esta deve ser realizada e exibida na tela. Empregue funções 
 * para cada operação.
 */

/* 
 * File:   main.c
 * Author: Muriele
 *
 * Created on 29 de Agosto de 2017, 17:40
 */

#include <stdio.h>
#include <stdlib.h>


  
int main (void )
{
  int mA[3][3], i, j;
    int mB[3][3];
    int mR[3][3];
    char operacao;

    printf("elementos matriz A: ");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("\nElemento[%d][%d] = ", i+1, j+1);
            scanf("%d", &mA[ i ][ j ]);
        }
    }

    printf("elementos matriz B: ");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("\nElemento[%d][%d] = ", i+1, j+1);
            scanf("%d", &mB[ i ][ j ]);
        }
    }
    printf(" + para somar / - para subtrair / * para multiplicar: ");
    scanf("%s", &operacao);
    switch (operacao) {
        case '+':
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    mR[i][j] = mA[i][j] + mB[i][j];
                    printf("%d", mR[i][j]);
                }
                printf("\n");
            }
            break;

        case '-':
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    mR[i][j] = mA[i][j] - mB[i][j];
                    printf("%d", mR[i][j]);
                }
                printf("\n");
            }
            break;

        case '*':
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    mR[i][j] = mA[i][j] * mB[i][j];
                    printf(" %d ", mR[ i ] [ j ]);
                }
                printf("\n");
            }
            break;

            
    }
}