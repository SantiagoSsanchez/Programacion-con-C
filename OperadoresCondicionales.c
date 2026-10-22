#include <stdio.h>

int main()
{
	int edad;
	printf("Ingresa tu edad de nacimiento\n");
	scanf("%d",&edad);
	if (edad >= 18)
	{
		printf("Eres mayor de edad: %d\n", edad);
	}else if (edad == 17)
	{
		printf("Lo siento ratica... te falta un año jejejeje\n");
	}
	else {
		printf("No eres mayor de edad! LARGO AYAYAYAYAYA\n");
	}
	return 0;
}