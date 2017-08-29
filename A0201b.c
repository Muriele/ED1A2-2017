/*
 * 
 */

/* 
 * File:   main.c
 * Author: Muriele
 *
 * Created on 29 de Agosto de 2017, 18:03
 */

#include <stdio.h>
#include <stdlib.h>

int processo (int num1,int num2,int *num3 ){
    num1*=10;
    num2*=100;
    *num3=(*num3)*1000;
    printf("o valor de n1 em processo %i\n",num1);
    printf("o valor de n2 em processo %i\n",num2);        
    printf("o valor de n3 em processo %i\n",*num3);
}
int main(int argc, char** argv) {
    int n1,n2,n3;
    int*N3;
    n1=1;
    n2=2;
    n3=3;
    N3=&n3;
    processo(n1,n2,N3);
    printf("o valor de n1 é %i\n",n1);
    printf("o valor de n2 é %i\n",n2);
    printf("o valor de n3 é %i\n",N3);          

    return (EXIT_SUCCESS);
}
