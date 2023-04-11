#include <stdio.h>
#include "io_utils.h"
# define ARRAY_SIZE 5

/**
 *
 * @return
 */
int main(){

	/**
	 * 定义数组
	 * 数组的索引通过 加  减 得到相应的位置
	 */
	int array[ARRAY_SIZE];

	PRINT_INT(array[0]);
	PRINT_INT(array[1]);

	/**
	 * 数组的边界
	 */

	/**
	 * 变长数组
	 * C99标准做了支持, 编译没问题
	 * 但是C90不支持这种写法
	 */
	int value = 2;
	int array_size_of_value[value];

	// 只读变量
	const int kSize = 3;
	int array_size_of_const[kSize];


	return 0;
}