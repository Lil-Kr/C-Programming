#define _XOPEN_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "io_utils.h"
#include <locale.h> // 文件字符编码相关头文件
#include <time.h>

/**
 * 格式化时间
 * @return
 */
int main() {

	time_t current_time;
	time(&current_time);

	puts(asctime(&current_time));
	puts(ctime(&current_time));

	/**
	 * 2020-11-09 06:59:47
	 * 格式化如期API strftime();
	 */
	char current_time_s[25];
	struct tm *calendar_time = localtime(&current_time);
	strftime(current_time_s, 25, "%Y-%m-%d %H:%M:%S",calendar_time);
	puts(current_time_s);

	struct tm parsed_time;
//	strptime(current_time_s);
	return 0;
}