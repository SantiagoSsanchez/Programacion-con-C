#include <stdio.h>

int suma (int num1, int num2);
int main(){

	int num1;
	int num2;
	printf("Ingresa un numero porfavor: \n");
	scanf("%i", &num1);
	printf("Ingrese el segundo numero: \n");
	scanf("%i", &num2);
	printf("Resultado: %i\n", suma(num1,num2) );
	return 0;
}

int suma(int num1, int num2){
	int suma = num1 + num2;
	return suma;
}