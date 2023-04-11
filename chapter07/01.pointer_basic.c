#include <stdio.h>
#include "io_utils.h"

/**
 * 指针也是一种类型
 *
 *
 * 指针变量是指向其他变量的
 *
 * @return
 */
int main() {

  /**
   * int a = 10;
   * int *p = &a;
   * * *p == a
   * * p == &a
   * * &p == 指针自己的地址
   */
  int a = 10;
  int *p = &a;// *p 存的是 a的地址

	PRINT_HEX(p);
	PRINT_INT(sizeof(int *));//
  PRINT_INT(a);
  PRINT_INT(*p == a);
  PRINT_INT(p == &a);

	/**
	 * 定义指针的指针
	 */
	 int *pp = &p;

  /**
   *
   */
	*p = 30;
  PRINT_INT(*p);
  PRINT_INT(a);

  /**
   * 只读变量类型的指针
   */
  int b;
  int *const cp = &a;
  *cp = 2;
  PRINT_INT(*p);

  /**
   * 指向只读变量的指针
   */
  int const *cp2 = &a;
  cp2 = &b;

  /**
   * 一般不会定义这样严格的指针
   */
  int const *const ccp = &a;
  // *ccp = 2;  // 不能被修改

  return 0;
}