#include <stdio.h>

int main(){
	int casos;
	printf("Elige el caso al que quieres entrar\n");
	scanf("%i", &casos);

	switch(casos){
		case 1:
		printf("Has ingresado al caso numero 1\n");
		break;
		case 2:
		printf("Has ingresado al caso numero 2\n");
		break;
		case 3:
		printf("Has ingresado al caso numero 3\n");
		break;
		default:
		printf("Jejejeje no encontramos tu caso, pierdete basura...\n");
		break;
	}
	return 0;
}