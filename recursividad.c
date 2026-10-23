#include <stdio.h>
long Factorial(long numero); //Se tiene que definir el tipo de funcion al inicio del programa.
int main(){

	int numero;
	printf("Ingresa un numero: \n");
	scanf("%i", &numero);
	for(int i = 0;i <= numero; i++){ //veces que iterara hasta que llegue al numero ingresado
		printf("Numero: %ld\n", Factorial(i));
	}
	return 0;
}

long Factorial(long numero){

	if(numero <= 1){
		return 1;
	}else{
		return(numero * Factorial(numero-1));  //el programa no ejecutara el resultado hasta resolver
//		 las otras funciones para poder hacer la multiplicacion correctamente
	}
}