
#include "Pilha.h"
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    struct Pilha minhaPilha;
    printf ("\nPALINDROMO");
    
    iniciarPilha(&minhaPilha);
    inserir(&minhaPilha,'A');
    inserir(&minhaPilha,'M');
    inserir(&minhaPilha,'A');
   
    if (palindromo(minhaPilha)==SIM){
        printf ("\nÉ um PALINDROMO!");                
    }else{
        printf ("nÉ PALINDROMO :(");
        
    }
    
    
    printf ("\nPALINDROMO");
    
    iniciarPilha(&minhaPilha);
    inserir(&minhaPilha,'P');
    inserir(&minhaPilha,'A');
    inserir(&minhaPilha,'R');
    inserir(&minhaPilha,'A');
    inserir(&minhaPilha,'N');
    inserir(&minhaPilha,'O');
    inserir(&minhaPilha,'S');
    inserir(&minhaPilha,'S');
    inserir(&minhaPilha,'A');
    inserir(&minhaPilha,'A');
    inserir(&minhaPilha,'L');
    inserir(&minhaPilha,'E');
    inserir(&minhaPilha,'G');
    inserir(&minhaPilha,'R');
    inserir(&minhaPilha,'I');
    inserir(&minhaPilha,'A');
   
    if (palindromo(minhaPilha)==SIM){
        printf ("\nÉ um PALINDROMO!");                
    }else{
        printf ("nÉ PALINDROMO :(");
        
    }
    
    return (EXIT_SUCCESS);
}

