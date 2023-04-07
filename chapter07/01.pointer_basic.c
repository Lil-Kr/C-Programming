#include <stdio.h>
#include "io_utils.h"

/**
 * 指针变量是指向其他变量的
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
  int *p = &a;

  PRINT_INT(a);
  PRINT_INT(*p == a);
  PRINT_INT(p == &a);

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