#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <locale.h> // 文件字符编码相关头文件
#include <time.h>
#include <math.h>

#include "io_utils.h"
#include "time_utils.h"

void DoHardWork() {
	double sum = 0;
	for (int i = 0; i < 10000000; ++i) {
//		sum += i * i / PI;
	}
	PRINT_DOUBLE(sum);
}

/**
 * 计算时间差
 */
int main() {

	time_t start_time = time(NULL);
	time_t end_time = time(NULL);

	double diff = difftime(start_time,end_time);
	PRINT_DOUBLE(diff);

	long_time_t start_time_ms = TimeInMillisecond();
	DoHardWork();
	long_time_t end_time_ms = TimeInMillisecond();

	PRINT_LLONG(end_time_ms - start_time_ms);

	/**
	 * 获取处理器的时间
	 */
	clock_t start_time_c = clock();
	DoHardWork();
	clock_t end_time_c = clock();
	PRINT_DOUBLE((end_time_c - start_time_c) * 1.0 / CLOCKS_PER_SEC);
	return 0;
}