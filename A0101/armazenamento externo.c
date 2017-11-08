#include <studio.h>

int count;
extern void write_extern();

main() {

	count = 5;
	write_extern();
}

/*Quando você possui vários arquivos e você define uma variável ou função global, que também será usada em outros arquivos, então extern será usado em outro arquivo para fornecer a referência de variável ou função definida. Apenas para entender, extern é usado para declarar uma variável ou função global em outro arquivo*/