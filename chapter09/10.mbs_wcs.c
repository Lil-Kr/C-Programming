#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "io_utils.h"
#include <locale.h> // 文件字符编码相关头文件

/**
 * 宽字符串与窄字符串的转换
 * ![image.png](https://upload-images.jianshu.io/upload_images/13213920-2e30f19e85c7301d.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
 *
 * 字符集常见的就是 ASCII 字符集、Unicode 字符集，编码就是将字符通过字符集映射为二进制整数的过程，反过来的过程则成为解码
 *
 * 注意点:
 * 	涉及到中文, 一定要和文件编码关联
 * @return
 */
int main() {

	{
		PRINT_BOOL(iswalpha(L'A'));
	}

	{
		/**
		 * 字符集编码
		 * 你好 这2个汉字, 编译完之后在mbs中存储的是 文件编码对应的编码结果
		 * 输出的时候 将当前文本的编码格式进行解码, 再转换为unicod编码
		 */
		char mbs[] = "你好";
	}
	return 0;
}