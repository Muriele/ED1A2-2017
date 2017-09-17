/*
 * Implemente um programa em C com uma função que recebe um número natural e
 *  exibe o valor correspondente em binário(Ex.: Se o número for 12 o programa
 *  apresenta 1100). Lembre-se que uma das formas de se converter números de
 *  decimal para binário é dividir, sucessivamente, um número por 2 e ir se
 * obtendo os restos até não ser mais possível dividir (empilhando as chamadas).
 *  Em seguida, deve-se escrever os restos obtidos do último para o primeiro
 *  (desempilhando os resultados dos cálculos dos restos).

/* 
 * File:   main.c
 * Author: Muriele
 *
 * Created on 11 de Setembro de 2017, 11:44
 */

#include "stdio.h"
#include "stdlib.h"
void binario (int);


int main(int argc, char** argv)
{
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    binario(num);
    
    return (EXIT_SUCCESS);
}

void binario (int n){
    if (n<=1){
        printf("%d",n);
        return;
    }else {
        if ((n>1)&&n<=3){
            printf("%d",n/2);
            printf("%d",n%2);
            return;
        }else{
            binario(n/2);
            printf("%d",n%2);
        }
    }
    

	return 0;
}
