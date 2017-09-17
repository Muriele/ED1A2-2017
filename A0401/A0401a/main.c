/*
 * Implemente o algoritmo de exemplo de recursividade, mostrado anteriormente,
 *  na forma de uma função que calcula o valor da função Fatorial de um número
 *  n qualquer. 
 */

/* 
 * File:   main.c
 * Author: Muriele
 *
 * Created on 29 de Agosto de 2017, 18:03
 */
#include <stdio.h>

int main()
{
int fat, n;
printf("Digite um valor para o qual deseja calcular o fatorial: ");
scanf("%d", &n);

for(fat = 1; n > 1; n = n - 1)
fat = fat * n;

printf("\nFatorial: %d", fat);
return 0;
}