#include <stdio.h>

int create_variable () {
  int variable=5;
  
return &variable;
}

int main() {
  int *pointer=create_variable();
  printf("Value of variable: %d", *pointer);

  return 0;
}
//result: Value of variable: 5
