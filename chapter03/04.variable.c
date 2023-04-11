#include <stdio.h>

/**
 * 内存地址分析
 * 定义变量之后申请了多大的空间, 取决于申请的类型
 * @return
 */
int main() {
	/**
	 * <type> <name>
	 */
  int var;

	/**
	 * <type> <name> = init_value
	 * 定义变量, 申请内存
	 */
	int value_int = 4;

  printf("size of var: %d \n", sizeof(value_int));
  printf("address of var: %#x \n", &value_int);

	/**
	 * key words
	 */
	 float a_float = 3.14;
	 printf("a_float: %f\n", a_float);

	 return 0;
}