#include <stdio.h>
#include "io_utils.h"
#define LENGTH 10

/**
 * 函数的数组类型参数【C语言极致效率之源】
 * 长度不够的元素的就访问不到了
 * @return
 */

int SumIntArray(int array[], int length) {
	int sum = 0;
	for (int i = 0; i < length; ++i) {
		sum += array[i];
	}
	return sum;
}

int main () {

	int array[LENGTH] = {1,4,7,0,10,33,654,392,23, 43};

	PRINT_INT(SumIntArray(array,LENGTH));

	return 0;
}