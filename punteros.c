#include <stdio.h>

int cubo(int *n);
int main() {
	int num1 = 5;
	printf("Valor del num: %i\n", num1 );
	cubo(&num1); //damos la direccion de la variable num1
	printf("Valor elevado al cubo: %i\n", num1);
	return 0;
}

int cubo(int *n){

	*n = *n * *n; //declaramos la variable con el "*" para que ya sepa la direccion del valor
}