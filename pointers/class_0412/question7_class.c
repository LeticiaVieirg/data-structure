#include <stdio.h>        

int soma (int a, int b) {
	return a+b;
}

int sub(int a, int b) {
	return a-b;
}

int calcula(int x, int y, int (*operacao)(int, int)) {
	return (*operacao)(x,y); //declara a funcao usando o ponteiro e usando os valores inteiros
}

int main() {
	int resultado=calcula(5,3,sub);
	printf("resultado: %d", resultado);
	return 0;
}
