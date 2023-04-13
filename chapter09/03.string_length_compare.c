#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>// 字符串处理lib
#include <string.h>
#include "io_utils.h"

/**
 * 字符串的长度与比较
 * @return
 */
int main() {

	/**
	 * C语言中字符串结尾是以null结尾
	 * 长度 = 起始地址 - null地址
	 */
	char *string = "hello world!";
	PRINT_INT(strlen(string));

	/**
	 * gcc标准
	 * 	第二个参数表示: 给需要计算的字符串传入一个上限, 超过这个上限就不管了
	 *
	 * c11标准
	 * 	strnlen_s(x, y);
	 */
	PRINT_INT(strnlen(string, 156));

	/** ============== 字符串比较 ============== **/

	char *left = "Hello World!";
	char *right = "Hello C Programmers!";

	PRINT_INT(strcmp(left, right));

	/**
	 * 比较到第5个字符就停止比较
	 */
	PRINT_INT(strncmp(left, right, 5));

	/**
	 * 按照字母排序
	 */
	char *names[] = {
			"Cindy",
			"Don",
			"Andrey",
			"Elsa",
			"George",
			"Frank",
			"Benny"
	};

	return 0;
}