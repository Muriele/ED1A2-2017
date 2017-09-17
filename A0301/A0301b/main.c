/*
        Com base no programa anterior crie um novo de forma que sejam 
        solicitados 10 nomes e 10 endereços. Ao terminar a digitação o sistema 
        entrará em um laço, solicitando um número referente à ordem de digitação
        realizada. Uma vez informado, o sistema deverá exibir o nome e o endereço 
        correspondente. Utilize apenas vetores. Caso o usuário informe um número
        fora do intervalo de 1 a 10, o sistema deverá alertar o usuário e solicitar
        a digitação novamente (Lembre-se que em C 0 primeiro índice é 0, logo 1 irá
        se referir ao elemento  0).
        Autor: Muriele Souza
*/

#include<stdio.h>
#include<string.h>

#define rep 10
#define c 40

int main( void)
{
     int i, fim = rep;	
     int posi = 0;
     char nomes[rep][c];
     char end[rep][c];
	


     for (i=0; i<rep; i++)
	 {
         printf(" %d Informe um nome  ", i);
         gets(nomes[i]);
         printf(" %d Informe o endereço  ", i);
         gets(end[i]);
                 
     }

	 puts("Nomes lidos");
     for (i=0; i<rep; i++)
	 {
         printf(" nome e endereço %d ", i);
         puts(nomes[i]);        
         puts(end[i]);
     }
        printf(" Qual posição do vetor deseja mostrar %d ", posi);
        scanf("%d",&posi);
        if (posi>10)
           printf(" Posição invalida digite novamente %d ", posi);
           scanf("%d",&posi);
              printf(" %d ", posi); 
              puts(nomes[posi]);        
              puts(end[posi]);
        
}         
         