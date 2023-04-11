#include <stdio.h>
#include "io_utils.h"


/**
 * 字符串
 * @return
 */

int main(){
	/**
	 * 字符串的末尾结束默认有一个null的值, 所以数组的长度需要12个字符
	 * 不然会乱码
	 * 这样不给定长度的字符串的数组, 有字面量指定分配
	 */
  char string[] = "hello world我";
//  char string[12] = "hello world";
//  char string[14] = "hello world我";

	for (int i = 0; i < 11; ++i) {
		PRINT_CHAR(string[i]);
	}

	/**
	 * 格式化,
	 * 数组名字 : string
	 */
  PRINTLNF("%s\n", string);

	char string_zh[] = "你好, 我的天";

	wchar_t ws[] = L"你好, 中国";
  return 0;
}