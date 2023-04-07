#include <stdio.h>
#include "io_utils.h"

#define ARRAY_SIZE 10

int main() {
  // 初始化1
  int array[ARRAY_SIZE];

  for (int i = 0; i < ARRAY_SIZE; ++i) {
    array[i] = i;
    printf("array[%d], value=%d \n", i, array[i]);
  }

  // 初始化2
  int array2[ARRAY_SIZE] = {0,1,2,3,4,5,6,7,8,9};
  for (int i = 0; i < ARRAY_SIZE; ++i) {
    PRINT_INT(array2[i]);
  }

  // C99标准
  char array_char[5] = {[2]='o', '2','3'};
  for (int i = 0; i < 5; ++i) {
    PRINT_HEX(array_char[i]);
  }

  return 0;
}