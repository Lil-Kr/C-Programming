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
	 * 字符串转换到数值类型过程的API
	 */
	PRINT_INT(atoi("1234")); // 1234
	PRINT_INT(atoi("-1234")); // -1234
	PRINT_INT(atoi("1234abcd")); // 1234
	PRINT_INT(atoi("0x10")); // 16

	PRINT_DOUBLE(atof("12.34")); // 12.34
	PRINT_DOUBLE(atof("-12e34")); // -1.2e+35
	PRINT_DOUBLE(atof("    1.234abcd")); // 1.234
	PRINT_DOUBLE(atof("0x10")); //
	PRINT_DOUBLE(atof("0x10p3.7")); //

	/**
	 * 其他转换api
	 * ![image.png](https://upload-images.jianshu.io/upload_images/13213920-d8ae041dfa96f868.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
	 *
	 * strtoX: 可重复解析, 更安全, 功能更强大
	 * ![image.png](https://upload-images.jianshu.io/upload_images/13213920-0a58ec4bafaebfda.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
	 */


	return 0;
}