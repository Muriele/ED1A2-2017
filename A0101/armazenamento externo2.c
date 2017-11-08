#include <stdio.h>

int main () {

	int n[ 10 ]; /* n é um vetor de 10 int */
	int i,j;

	/* inicializar os elemntos do vetor com 0 */
	for ( i = 0; i < 10; i++ ) {
		n [ i ] = i + 100; /* set element at location i to i + 100 */
	}

	/* output each array element's value */
	for (j = 0; j < 10; j++ ) {
		printf("Element[%d] = %d\n", j, n[j] );
	}

	return 0;
}