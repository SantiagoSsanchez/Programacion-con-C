#include <stdio.h>

struct perro
{
	char nombre[20];
	int edad;
	float peso;
}perros[3];
int main(){

	for(int i = 0;i < 3; i++){
		printf("Ingrese el nombre del perro %i\n", i+1);
		scanf("%s",&perros[i].nombre);
		printf("Ingrese la edad del perro \n");
		scanf("%i",&perros[i].edad);
		printf("Ingrese el peso en kg del perro \n");
		scanf("%f",&perros[i].peso);
	}

	for (int i = 0; i < 3; ++i)
	{
		printf("El nombre del perro %i es: %s\n",i+1, perros[i].nombre);
		printf("La edad del perro %i es: %i\n", i+1 ,perros[i].edad);
		printf("El peso del perro %i es de: %3fKg. \n", i+1, perros[i].peso);

	}
	return 0;
}