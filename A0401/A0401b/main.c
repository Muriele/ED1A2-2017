/*
 * A sequência de Fibonacci representa outra função matemática recursiva.  
 * No caso ela define uma sequência de números que se lançados em um plano
 *  cartesiano desenham um espiral capaz de ser detectado, por exemplo, nas
 *  curvas dos caracóis. Seja X a função Fibonacci. 
 */

/* 
 * File:   main.c
 * Author: Muriele
 *
 * Created on 11 de Setembro de 2017, 11:35
 */

#include <stdio.h> 
#include <stdlib.h> 

void calculaFibonnaci();
int fibonnaci();

int vetor[1000];

void calculaFibonnaci(int i) { 

    if(i==1 || i==2) {
        vetor[i] = 1;
    }
    else { 
        vetor[i] = fibonnaci(i-1) + fibonnaci(i-2);
    }
}

int fibonnaci(int i)
{
    if(vetor[i]==0) {
        calculaFibonnaci(i);
        printf("%d ", vetor[i]);
    }
    else {
        return vetor[i];
    }   
} 

int main(int argc, char* argv[]) 
{
    int i, N;
    int *vetor;
    printf("Digite quantos termos da série de fibonacci você quer q seja impresso: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
        fibonnaci(i);

    return 0;
} 

