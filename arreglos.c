#include <stdio.h>

int main(){
	//arreglo multidimencional
	//columnas... 0 1 2
	//fila.fila0: 5 4 7
	//     fila1: 2 6 9
	int multi[2][3] = {{5,4,7},{2,6,9}};
	printf("%i\n", multi[0][1] );
//	int tamano;
//	printf("Ingresa el tamano de la lista\n");
//	scanf("%i", &tamano);
//	int edad[tamano];

//	for(int i = 0; i < tamano; i++){
//		printf("ingrese el valor: %i\n", 1+i);
//		scanf("%i", &edad[i]);
//	}

//	for(int i = 0;i < tamano; i++){
//		printf("Datos de la lista: %i\n- ", edad[i] );
//	}
//	int arreglo[4] = {6,4,7,9};
//	printf("%i\n", arreglo[3]);
	return 0;
}