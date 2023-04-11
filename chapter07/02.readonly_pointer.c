#include <stdio.h>
#include "io_utils.h"

/**
 * 只读指针变量与只读变量指针
 * @return
 */

int main () {

	int a;
	int *p = &a;
	PRINT_HEX(p);
	PRINT_HEX(&a);

	// 给 a 变量赋值
	*p = 20;
	PRINT_INT(*p);
	PRINT_INT(a);

	/**
	 * 倒着念
	 * 含义:
	 * 	int *const cp; const 指针指向了int类型的变量, *cp 是能够被修改的
	 * 	*cp 指针可以修改
	 * 	cp 不可以修改
	 */
	int *const cp = &a;
	*cp = 3;

	/**
	 * int const *const ccp; const 指针指向了 const int 型的变量, 只读, 不能被修改
	 * *ccp 这个指针 只读 不能修改
	 */
	int const *const ccp = &a;

	return 0;
}