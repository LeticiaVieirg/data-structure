
#include <stdio.h>

int main() {
	int vet[10];
	int i,j,aux;

	for(i=0;i<10;i++) {
		vet[i]=i;
	}
	
	for (i=0;i<10;i++){
		printf("%d", vet[i]);
	}

printf("\n\n");

	int i=0; // zera a variavel i

	for(j=9;j>=4;j--) {
		aux=vet[i];
		vet[i]=vet[j];
		vet[j]=aux;
		i++;
	}

	for(i=0;i<10;i++){
		printf("%d", vet[i]);
	}

return 0;
}
