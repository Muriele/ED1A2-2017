/*
 * Faça um programa que solicite a informação de valores inteiros para uma 
 * matriz de ordem 3 (M) e que, em seguida, exiba a Matriz Transposta de M (MT).
 */

/* 
 * File:   main.c
 * Author: Muriele
 *
 * Created on 29 de Agosto de 2017, 17:34
 */

#include <stdio.h>
#include <stdlib.h>

/*
 *
 */
int main(int argc, char** argv) {
    int mA[3][3], i, j, mB[3][3];

    printf("Digite o valor para matriz : ");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("\n Elemento [%d] [%d] = ", i + 1, j + 1);
            scanf("%d", &mA[i][j]);
        }

    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            mB[i][j] = mA[j][i];

        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d", mB[i][j]);
        }
        printf("\n");
    }
    return (EXIT_SUCCESS);
}