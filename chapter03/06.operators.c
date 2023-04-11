#include <stdio.h>

/**
 * 运算符, 所有的运算都是表达式
 * @return
 */
int main() {
	int first = 0;
	int second;
	int third;

	/**
	 * 赋值运算符
	 */
	third = second = first;

	/**
	 * 四则运算符
	 */
	int left, right;
	left = 2;
	right = 3;
	int sum = left + right; //
	printf("sum = %d\n", sum);
	printf("left / right = %d\n", right / left);

	/**
	 * 关系运算符
	 * true: 1
	 * false: 0
	 */
	printf("3 > 2: %d \n", 3 > 2);
	printf("3 < 2: %d \n", 3 < 2);

	/**
	 * && 与
	 * || 或
	 */
	printf("3 > 2 && 3 < 2: %d\n", 3 > 2 && 3 < 2);
	printf("3 > 2 || 3 < 2: %d\n", 3 > 2 || 3 < 2);

	int i = 1;
	int j = i++;
	int k = ++i;


	printf("i: %d \n", i);
	printf("j: %d \n", j);
	printf("k: %d \n", k);

  /**
   * bit操作, 涉及到开关
   * &
   * |
   * ^
   * ~
   * _Bool is_enabled = true;
   */
	int flag_1 = 0x1;
	int flag_2 = 0x2;

	printf("flag_1 & flag_2: %d\n",~flag_1);

  /**
   * 移位运算
   * <<
   * >>
   */
#define FLAG_VISIBLE 1 << 0
#define FLAG_TRANSPARENT 1 << 1
#define FLAG_RESIZABLE 1 << 2

	int x = 100;
  printf("x 左移: %d\n", x << 1);

  return 0;
}