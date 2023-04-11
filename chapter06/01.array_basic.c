#include <stdio.h>
#include "io_utils.h"

#define ARRAY_SIZE 10

/**
 *
 * @return
 */

int main() {
  /**
   * 初始化1 自动类型数组
   * 开辟了 ARRAY_SIZE 大小的空间在内存中
   */
  auto int array[ARRAY_SIZE];

  for (int i = 0; i < ARRAY_SIZE; ++i) {
    array[i] = i;
//    printf("array[%d], value=%d \n", i, array[i]);
	  PRINT_INT(array[i]);
  }

	printf("======================\n");

  /**
   * 初始化2
   */
  int array2[ARRAY_SIZE] = {0,1,2,3,4,5,6,7,8,9};
  for (int i = 0; i < ARRAY_SIZE; ++i) {
    PRINT_INT(array2[i]);
  }


	printf("======================\n");

  // C99标准
  char array_char[5] = {[2]='o', '2','3'};
  for (int i = 0; i < 5; ++i) {
    PRINT_INT(array_char[i]);
  }

  return 0;
}