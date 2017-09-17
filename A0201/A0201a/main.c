
/* 
 * File:   main.c
 * Author: Muriele
 *
 * Created on 29 de Agosto de 2017, 18:03
 */

#include <stdio.h>
#include <stdlib.h>

int soma (int num1,int num2 ){
    int R;
    R=num1+num2;
    return R;
    
}
int main(int argc, char** argv) {
    int n1,n2,n3;
    n1=100;
    n2=200;
    printf("a soma de 10 com 20 é %i\n",soma(10,20));
    printf("a soma de n1 com n2 é %i\n",soma(n1,n2));
    n3=soma(1000,2000);
    printf("a soma de 1000 com 2000 (n3) e %i",n3);          

    return (EXIT_SUCCESS);
}



