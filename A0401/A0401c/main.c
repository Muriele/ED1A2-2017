/*
 * Implemente um programa em C com uma função recursiva que realiza a 
 * multiplicação de dois números (M x N) empregando apenas soma. Isto pois 
 * sabemos que, por exemplo, 3 x 4 = 4 + 4 + 4. Pense que a função recursiva
 *  poderá receber dois parâmetros (M e N). Tente identificar a recursividade
 *  presente neste cálculo.
 */

/* 
 * File:   main.c
 * Author: Muriele
 *
 * Created on 11 de Setembro de 2017, 11:39
 */
#include <stdio.h> 
#include <stdlib.h> 

int main(int argc, char* argv[]) 
{
    int a, b;
    printf("Digite um nimero: ");
    scanf("%d", &a);
    printf("Digite um nimero: ");
    scanf("%d", &b);
    
    mult();
    return b+mult(a-1,b);
} 


int mult (int a, int b){
    if (a == 0) 
        return 0;
    if (a == 1)
        return b;
    return b+mult(a-1,b);
}


