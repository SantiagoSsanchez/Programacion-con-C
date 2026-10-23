#include <stdio.h>
#define lenght 2

struct dueno {
	char nombre[20];
	char direccion[20];
};

struct perro{
	char nombre[20];
	int edadMeses;
	struct dueno duenoperro;
}perros[lenght];
int main(){

	for (int i = 0; i < lenght; ++i)
	{
		printf("Ingrese el nombre del perro: %i\n", i+1 );
		scanf("%s", perros[i].nombre);
		printf("ingrese la edad en meses del perro: %i\n", i+1 );
		scanf("%i", &perros[i].edadMeses);
		printf("Ingree el nombre del dueño: \n", i+1);
		scanf("%s", perros[i].duenoperro.nombre);
		printf("ingrse la direccion del dueño: \n", i+1);
		scanf("%s", perros[i].duenoperro.direccion);
	}

	printf("=================================================\n=================================================\n");

	for(int i = 0; i < lenght; i++) {
		printf("El nombre del perro %i es: %s\n",i+1,perros[i].nombre);
		printf("Los meses de vida del perro %i son: %i\n",i+1, perros[i].edadMeses );
		printf("El dueño es: %s\n", perros[i].duenoperro.nombre);
		printf("Su direccion es: %s\n", perros[i].duenoperro.direccion);
	}
	return 0;
}