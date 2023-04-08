#include <stdio.h>
#include <stdlib.h>
#include "io_utils.h"

/**
 * 函数指针与typeof
 * @return
 */

int *(f1(int, double ));

int (*f2)(int, double);

int *(*f3)(int, double);

// int (*f)(int, double)[]; // 非法的

int (*f5[])(int, double);

typedef int (*Func)(int, double);

typedef int Boolean;

void InitPointer(int **ptr, int length, int default_value) {
	*ptr = malloc(sizeof(int) * length);
	for (int i = 0; i < length; ++i) {
		(*ptr)[i] = default_value;
	}
}

int main() {

	int a;
	int *p;

//	PRINT_HEX(&main);
//	PRINT_HEX(&InitPointer);
	return 0;
}