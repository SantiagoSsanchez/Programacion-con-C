#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define lenght 2
int size; //tamaño que contara las letras
struct perro
{
	char nombre[20];
	char *p_nombre; //puntero que reservara el espacio en memoria
}perros[lenght];
int main(){
	for (int i = 0; i < lenght; ++i)
	{
		printf("ingrese el nombre del perro: \n");
		scanf("%s", perros[i].nombre);
		size = strlen(perros[i].nombre); //size es un entero que aqui esta contando los caracteres con ayuda de strlen
		printf("%i\n",size);
		perros[i].p_nombre = malloc(size * sizeof(char)); //llamos a el perro con el puntero para que size diga el tamaño necesario que se nececita en memoria a malloc
//                                                   sizeof(char) esta ligado al puntero por eso es de ese tipo de variable
		if (NULL == perros[i].p_nombre)
		{
			printf("No se reservo el espacio en memoria\n");
		}else{
			strcpy(perros[i].p_nombre,perros[i].nombre); //nose que esto ¿guarda el dato en la memoria? si, lo guarda.
		}
	}
	for (int i = 0; i < lenght; ++i)
	{
		printf("El nombre del perro es: %s\n", perros[i].nombre);
	}
	return 0;
}