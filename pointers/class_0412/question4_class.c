#include <stdio.h>

int increment(int num) {
  num++;
return 0;
}

int main (void) {
  int number=5;
  number=increment(number);
  printf("%d",number)
return 0;
}
//result 6
