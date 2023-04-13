#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "io_utils.h"
#include <locale.h> // 文件字符编码相关头文件
#include <time.h>

/**
 * 获取日历时间
 */
int main() {

	time_t current_time;
	time(&current_time);
	/**
	 * localtime -> 使用的是本地机器的时区
	 */
	struct tm *calendar_time = localtime(&current_time);
	PRINT_INT(calendar_time->tm_year);
	PRINT_INT(calendar_time->tm_mon);
	PRINT_INT(calendar_time->tm_mday);
	PRINT_INT(calendar_time->tm_hour);
	PRINT_INT(calendar_time->tm_min);
	PRINT_INT(calendar_time->tm_sec);

	calendar_time -> tm_sec = 70;
	time_t current_time2 = mktime(calendar_time);
	PRINT_INT(current_time2);



	return 0;
}