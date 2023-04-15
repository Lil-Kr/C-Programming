#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <locale.h> // 文件字符编码相关头文件
#include <time.h>
#include <math.h>
#include "io_utils.h"
#include "time_utils.h"

/**
 * 输入 / 输出流
 */
int main() {

	/**
	 * 返回file指针
	 */
	FILE *file = fopen("CMakeLists.txt", "r");

	if (file) {
		puts("open success");

		// 文件读写错误
		int err = ferror(file);
		PRINT_INT(err);

		// 判断文件是否已经结束了
		int eof = feof(file);
		PRINT_INT(eof);

		fclose(file);
	} else {
		PRINT_INT(errno);
	}

	for (int i = 0; i < 10; ++i) {
		PRINT_INT(i);
		puts(strerror(i));
	}

	return 0;
}