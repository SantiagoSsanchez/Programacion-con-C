#include <stdio.h>
struct perro {
	char nombre[20];
	int edad;
	float peso;
}perro1={"Connie",5,20.7};

int main(){
	printf("El nombre del perro es: %s tiene una edad de: %i años y pesa %3.f.Kg\n", perro1.nombre,perro1.edad,perro1.peso);
	return 0;
}