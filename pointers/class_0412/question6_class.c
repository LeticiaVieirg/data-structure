#include <stdio.h>

void increment(int *pointer) {
  (*pointer)++;
}

int main() {
  int variable=5
  increment(&variable);
  printf("Valor da variavel: %d", variable);

return 0;
}
