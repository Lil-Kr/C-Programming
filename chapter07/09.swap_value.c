#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "io_utils.h"

/**
 * 交换2个元素的位置
 * @return
 */

int swap1(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

int Swap2Int(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * 通用版本
 * @param first
 * @param second
 * @param size
 */
void Swap(void *first, void *second, size_t size) {
	void *temp = malloc(size);

	if (temp) {
		memcpy(temp, first, size);
		memcpy(first, second, size);
		memcpy(second, temp, size);
		// 释放内存
		free(temp);
	} else {

	}
}

#define  SWAP(a, b, type) {type temp = a; a = b; b = temp;}
#define  SWAP2(a, b) {typeof(a) temp = a; a = b; b = temp;}

int main() {

	int a = 0;
	int b = 1;

//	Swap2Int(&a, &b);
	Swap(&a, &b, sizeof(int));

	PRINT_INT(a);
	PRINT_INT(b);

	double x = 3.0;
	double y = 4.0;
	Swap(&x, &y, sizeof(double));

	PRINT_DOUBLE(x);
	PRINT_DOUBLE(y);

	return 0;
}