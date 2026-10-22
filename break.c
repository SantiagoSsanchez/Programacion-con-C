#include <stdio.h>

int main(){

	int num = 0;

	while(num<=7){

		num++;
		if(num == 2){
			continue; //continue el programa pero salta el paso siguiente.
		}
		printf("Nuestro numero: %i\n", num );
//		num++; <--- nunca llega al final del programa
	}
	return 0;
}