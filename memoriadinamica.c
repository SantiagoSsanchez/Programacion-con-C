#include <stdio.h>
#include <stdlib.h>

int main(){
	int n = 10;
	char *apt;
	apt = malloc(n*sizeof(char));

	if(NULL == apt){
		printf("No se reservo espacio en la memoria\n");
	}else{
		printf("Al parecer si se reservo espacio en memoria :D\n");
	};
	return 0;
}