#include <stdio.h>
#include <ctype.h>// 字符串处理lib
#include "io_utils.h"


int IsDigit(char c) {
	return c >= '0' && c <= '9';
}

/**
 * 判断字符类型及其原理剖析
 * #include <ctype.h> 这个头文件中包含字符串工具类
 * C语言中的字符集就是ASCII码组成的
 * @return
 */
int main() {
	PRINT_INT(IsDigit('9'));
	PRINT_INT(isdigit('9'));
	int i = 10;
//	printf("判断字符类型\n");

	/**
	 * <ctype.h> 这个库中
	 * 0: 假
	 * 非0: 真
	 */
	PRINT_INT(isspace(' ')); // 判断空白字符
	PRINT_INT(isalpha('t')); // 字母表
	PRINT_INT(isalnum('a')); // 判断是否为数字
	PRINT_INT(isalnum('1')); // 判断是否为数字
	PRINT_INT(ispunct(',')); // 判断是否是标点符号

	/**
	 * 大小写转换
	 */
	PRINT_INT(tolower('A'));
	PRINT_INT(toupper('n'));
	return 0;
}