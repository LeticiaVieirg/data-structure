#include <stdio.h>

int soma (int a, int b) {
  return a+b;
}

int sub(int a, int b) {
  return a-b;
}

int mult(int a, int b) {
  return a*b;
}

int div(int a, int b) {
  return a/b;
}

int calcula(int x, int y, int (*operacao)(int, int)) { // dois
  return (*operacao)(x,y); //declara a funcao usando o ponteiro e usando os valores inteiros
}

int main() {
  int res_soma=calcula(5,3,soma);
  int res_sub=calcula(5,3, sub);
  int res_mult=calcula(5,3,mult);
  int res_div=calcula(5,3,div);

  printf("resultado soma: %d\\n ", res_soma);
  printf("resultado subtracao: %d\\n", res_sub);
  printf("resultado multiplicacao: %d\\n", res_mult);
  printf("resultado divisao: %d\\n", res_div);

return 0;
}
