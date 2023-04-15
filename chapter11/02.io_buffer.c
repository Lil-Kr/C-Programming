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
 * 文件流的缓冲
 * @return
 */
int main() {

	FILE *file = fopen("CMakeLists.txt", "r");

	/**
	 * 设置缓冲区
	 */
	char buf[BUFSIZ];
	setbuf(file, buf);// 一般不常用, 比较受限制

	char buf1[8192];
	setvbuf(file,buf1,_IOLBF, 8192);

	/**
	 * 清空缓存
	 */
//	fflush();
	return 0;
}