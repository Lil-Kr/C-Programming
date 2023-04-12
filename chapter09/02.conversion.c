#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>// 字符串处理lib
#include "io_utils.h"


/**
 * 字符串与其他数据类型转换
 * @return
 */
int main () {

	/**
	 * atox
	 * 转换过程中
	 */
	PRINT_INT(atoi("1234"));// 1234
	PRINT_INT(atoi("-1234"));// -1234
	PRINT_INT(atoi("1234abcd"));// 1234
	PRINT_INT(atoi("0x10"));

	PRINT_DOUBLE(atof("12.34"));

	/**
	 * 其他转换api
	 * ![image.png](https://upload-images.jianshu.io/upload_images/13213920-d8ae041dfa96f868.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
	 *
	 * strtoX: 可重复解析, 更安全, 功能更强大
	 * ![image.png](https://upload-images.jianshu.io/upload_images/13213920-0a58ec4bafaebfda.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
	 */
//	strtol();

	return 0;
}