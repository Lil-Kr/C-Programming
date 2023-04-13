#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "io_utils.h"

/**
 * C11的安全版本的函数
 * @return
 */
int main() {

	/**
	 * 下面这个例子
	 * 将 Too long 放入dst中, dst只有2个字符
	 */
	char dst[2];
	int error_no = strcpy_s(dst,2,"Too long");

	PRINT_INT(error_no);

	/**
	 * 有错误提示
	 */
	if (error_no) {
		perror("strcpy_s returns: ");
	}
	return 0;
}