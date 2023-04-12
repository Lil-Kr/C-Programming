#include <stdio.h>
#include <stdlib.h>
#include "io_utils.h"

int *(f1(int, double ));

int (*f2)(int, double);

int *(*f3)(int, double);

//int (*f)(int, double)[]; // 非法的

int (*f5[])(int, double);

/**
 * 取别名
 */
typedef int (*Func)(int, double);

typedef int Boolean;

void InitPointer(int **ptr, int length, int default_value) {
	*ptr = malloc(sizeof(int) * length);
	for (int i = 0; i < length; ++i) {
		(*ptr)[i] = default_value;
	}
}

/**
 * 函数指针 与 typeof
 * @return
 */
int main() {
	int a;
	int *p;

	PRINT_HEX(&main);
	PRINT_HEX(&InitPointer);

	/**
	 * 函数指针
	 */
	void (*func)(int **ptr, int length, int default_value) = &InitPointer;

	/**
	 * 写法1: func(&p, 10, 0);
	 * 写法2: (*func)(&p, 10, 0);
	 */
	func(&p, 10, 0);
	PRINT_INT_ARRAY(p, 10);
	free(p);

	Func func_1 = &a;
	return 0;
}