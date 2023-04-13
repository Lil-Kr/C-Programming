#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "io_utils.h"
#include "time_utils.h"
#include <locale.h> // 文件字符编码相关头文件
#include <time.h>

/**
 * 获取系统时间
 */
int main() {

	time_t current_time;
	current_time = time(&current_time);
	PRINT_INT(current_time);

	current_time = time(NULL);
	PRINT_LONG(current_time);

	PRINT_LLONG(TimeInMillisecond());
	PRINT_LLONG(TimeInMillisecond());
	PRINT_LLONG(TimeInMillisecond());
	PRINT_LLONG(TimeInMillisecond());
	PRINT_LLONG(TimeInMillisecond());
	return 0;
}