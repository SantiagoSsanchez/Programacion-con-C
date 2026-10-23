#include <stdio.h>

size_t getsize(float *ptr);
int main() {
	float array[20];

	printf("El tamaño del arreglo en bytes es: %lu\n",sizeof(array) );
	printf("La funcion con puntero del arreglo a bytes es: %lu\n", getsize(array));
	return 0;
}

size_t getsize(float *ptr) {

	return sizeof(ptr);
}