#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "io_utils.h"
#include <locale.h> // 文件字符编码相关头文件
#include <time.h>

/**
 * 时间的基本概念
 *
 * UTC: 世界调和时间: 是国际时间的标准, 当提到UTC时, 它一定是一个确定的值, 不受时区影响
 * GMT: 就是格林威治时间: 与UTC的时间时一致的, 但是提到GMT的时候其实指的就是零时区, 他现在已经不是时间标准了
 * Epoch: 一半是指纪元
 * 	计算机程序中事用的时间都是从UTC时间1970-1-1： 00:00:00
 * 	java js 都采用了Unix Epoch, windows上的c实现也一样
 * @return
 */
int main() {

	time_t;
	PRINT_LLONG(sizeof(time_t));
	clock;
	PRINT_LLONG(sizeof(clock));

	struct tm;
	struct timespec; // C11; MSVC
	struct timeb;

#ifdef __unix__
	struct timeval;
#endif

	return 0;
}
