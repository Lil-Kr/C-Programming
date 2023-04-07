#include  <stdio.h>



int main() {
  for (int i = 0; i < 5; ++i) {
    printf("hello, world! \n");
  }

  int sum = 0;
  int i = 0;

  while (i < 10) {
    sum = sum + 1;
    i++;
  }

  printf("sum = %d, \n", sum);

  return 0;
}