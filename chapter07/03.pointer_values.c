#include <stdio.h>
#include "io_utils.h"

/**
 * 野指针
 */
int *pointer_at_large;


/**
 * 特殊的指针
 * *pointer_at_large 这种指针是全局的,
 * 而 a 这个变量是有作用域的
 */
void DangerousPointer() {
  int a = 2;
  pointer_at_large = &a;

	// 赋值为null
	pointer_at_large = NULL;
}

/**
 * 1. 不要将硬编码赋值给指针
 * 2. 空指针NULL的用法
 * 3. 注意避免产生野指针
 * @return
 */
int main() {

	/**
	 * 为 *p 赋值一个非法的地址
	 */
  int *p = (int *)100;

  PRINT_INT(p);
  PRINT_INT(&p);

	/**
	 * 给 *p2 赋值为 NULL
	 */
	int *p2 = NULL;
	// *p2 = 3; // error
//	PRINT_HEX(*p2);

//	PRINT_INT(*pointer_at_large);

  return 0;
}