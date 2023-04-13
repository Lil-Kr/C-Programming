#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "io_utils.h"

/**
 * 字符串拼接和复制
 * @return
 */
int main() {

	/**
	 * 常用字符串拼接api
	 * strcat();
	 */
	char src[] = "HelloWorld";
	char dest[20] = "C said: ";
//	strcat(dest, src);
//	puts(dest);

	/**
	 * 把一个字符串赋值到另一个位置上
	 */
	strcpy(dest + strlen(dest), src);
	puts(dest);

//	PRINT_INT(sizeof(dest) + sizeof(strlen(dest)));

	return 0;
}