/*implemente um programa que solicite 5 números e os armazene em um vetor A.
        Em seguida o programa deve solicitar mais 5 números e armazená-los 
        em um vetor B. Por fim, o programa deverá preencher um vetor C,
        intercalando os valores do vetor A e do vetor B.*/




#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    int vetA[5];
    int vetB[5];
    int vetC[10];
    int cont1, cont2, cont3;
    for(cont1 = 0; cont1 < 5; cont1++){
        printf("Informe o %d° valor de A: ", cont1 + 1);
        scanf("%d", &vetA[cont1]);
    }
    for(cont1 = 0; cont1 < 5; cont1++){
        printf("Informe o %d° valor de B: ",cont1 + 1);
        scanf("%d", &vetB[cont1]);
    }
    cont3 = -1;
    for(cont2 = 0; cont2 < 10; cont2++){
        cont3++;
        vetC[cont2] = vetA[cont3];
        vetC[cont2 + 1] = vetB[cont3];
        cont2++;
    }
    printf("A sequência do vetor C fica:");
    for(cont1 = 0; cont1 < 10; cont1++){
        printf("%d ", vetC[cont1]);
    }
        
    return (EXIT_SUCCESS);
}