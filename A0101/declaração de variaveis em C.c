#include <stdio.h>

//declaração de variaveis: */
extern int a, b;
extern int c;
extern float f;

int main () {
	
	/*definição de variavel : */
	int a, b;
	int c;
	float f;

	/* inicialização /*
	a = 10;
	b = 20;

	c = a + b;
	printf("valor de c : %d \n", c);

	f = 70.0/3.0;
	printf ("valor de f : %f \n", f);

	return 0;
}