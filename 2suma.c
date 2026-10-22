#include <stdio.h>

int main()
{
	int num1,num2,resultado;
	int a=12;
	int b=9;
	printf("Ingrese el primer numero\n");
	scanf("%d",&num1);
	printf("Ingrese el segundo numero\n");
	scanf("%d",&num2);
	resultado = a*b*(num1+num2);
	printf("El resultado es: %d\n", resultado);
	return 0;
}