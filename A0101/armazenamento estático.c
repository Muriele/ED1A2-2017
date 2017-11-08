#include <stdio.h>

/* function declaration quando est�tica � usada em uma vari�vel global, faz com que apenas uma c�pia desse membro seja compartilhada por todos os objetos de sua classe */
void func(void);

static int count =5; /* global variable */

main() {

	while(count--) {
	   func();
	}
	
	return 0;
}

/* function definition  */
void func( void ) {

	static int i = 5; /* local static variable */
	i++;

	printf("i is %d and count is %d\n", i, count);
}