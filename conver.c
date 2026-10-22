/*Conversion de tipos de datos (casting*/
#include <stdio.h>

int main(){

	int dato = 80;
	float f = 67.99;
	float suma = (float)dato + f;
	printf("%.2f\n", suma );
//	printf("entero: %i\n flotante: %.2f\n double: %.3f\n caracter: %c\n",dato, (float)dato,(double)dato,(char)dato);
	return 0;
}