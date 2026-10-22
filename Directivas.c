/*
	Directivas del procesador
*/

#include <stdio.h>
//#include "Nombre del archivo"
#define PI 3.14159
#define CUBO(a) a*a*a
int main(){
//	int suma
//	suma = PI + 3
	int a = 3;
	printf("El valor de nuestro cubo es: %i\n", CUBO(a));
	return 0;
}