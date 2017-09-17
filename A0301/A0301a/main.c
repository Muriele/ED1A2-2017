/*
        
        Objetivo: Escreva um algoritmo que solicite 10 nomes e os armazene em
        um vetor. Após informados os nomes o sistema deverá exibir uma listagem 
        completa dos nomes informados incluindo o índice e o nome correspondente
       (note-se que em C o índice inicia em 0).
        Autor: Muriele Souza
*/

#include<stdio.h>
#include<string.h>

#define l 10
#define c 40

int main( void)
{
     int i, fim = l;	 
     char nomes[l][c];



     for (i=0; i<l; i++)
	 {
         printf("Digite o nome  %d  ", i);
         gets(nomes[i]);
     }

	 puts("Nomes lidos");
     for (i=0; i<l; i++)
	 {
         printf(" nome %d  ", i);
         puts(nomes[i]);
     }

}