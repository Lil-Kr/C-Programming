#include <stdio.h>



int bitXor(int x, int y) {

  return ~((~x)&(~y)) & (~(x&y));
}

int main() {

  int x = 2;

  int y = 4;

  printf("x ->: %d \n",x);


  printf("~x ->: %d \n",~x);

  return 0;
}

