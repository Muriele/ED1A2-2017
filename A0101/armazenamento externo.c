#include <studio.h>

int count;
extern void write_extern();

main() {

	count = 5;
	write_extern();
}

/*Quando voc� possui v�rios arquivos e voc� define uma vari�vel ou fun��o global, que tamb�m ser� usada em outros arquivos, ent�o extern ser� usado em outro arquivo para fornecer a refer�ncia de vari�vel ou fun��o definida. Apenas para entender, extern � usado para declarar uma vari�vel ou fun��o global em outro arquivo*/