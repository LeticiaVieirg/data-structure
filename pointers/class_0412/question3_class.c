#include <stdio.h>

int increment(int num) {
  return ++num;
}

int main(void) {
  int number=5;
  increment(number);
  printf("%d", number);
return 0;
}

//result 5
