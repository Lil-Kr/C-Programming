#include <stdio.h>
#include "io_utils.h"

/**
 * 指针的参数作为返回值
 * 通过汇编了解函数返回机制
 *
 * @return
 */

int SumIntArray(int array[], int length) {
  int sum = 0;
  for (int i = 0; i < length; ++i) {
		sum += array[i];
  }
  return sum;
}

int SumIntArray2(int array[], int length, int *sum) {
	*sum = 0;
	for (int i = 0; i < length; ++i) {
		*sum += array[i];
	}
}

int main() {

	int array[] = {0, 1, 2, 3, 4, 5};
	int sum2;
	int a = SumIntArray(array, 6);
	int b = SumIntArray2(array, 6, &sum2);
	PRINT_INT(sum2);
  return 0;
}