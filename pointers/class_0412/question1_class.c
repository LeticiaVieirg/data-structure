#include <stdio.h>

int inc(int num){
	num++;
return num;
}


int main (void){
	int numero=5;
	numero=inc(numero);
	printf("%d", numero);

return 0;
}
