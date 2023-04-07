#include <stdio.h>
#include "io_utils.h"

/**
 * 指针的运算
 * 指针的值是整数
 * @return
 */
int main() {

  int a = 2;
  int *p = &a;

  {
	int array[] = {0, 1, 2, 3, 4};
	int *p = array;
	PRINT_INT(*(p + 3));// 移动了索引, 推荐写法
	PRINT_INT(*(array + 3));
	PRINT_INT(*(3 + array));// 交换位置
	PRINT_INT(3[array]);// 不建议这样写
	PRINT_INT(array[3]);// 推荐写法
	PRINT_INT(p[3]);

	int *const array_p = array;
	PRINT_BOOL(array_p);
  }
  return 0;
}