#include <stdio.h>
#include "io_utils.h"

/**
 * 左值和右值
 * 左值:
 * 	1. 一定是内存空间
 * 右值: 内存空间当中的值
 * @return
 */
int main() {

  int a;
  a = 2;

  /**
   *
   */
  int *p = &a;
  *p = 3;

  /**
   * 此时 *p 已经完成了一个读取操作
   * 把a的值读取出来了
   */
  int b = *p;

  /**
   * 错误case
   */
//  &a = p; //
	int array[4] = {90,32,45,15, 48, 51};
	int *pa = array;// OK
	*pa = 2;// OK
	PRINT_INT(*pa);
	*pa++ = 3;// ctrl + w, 先选中的部分就是先结合的部分, 这个操作是往后移1位, *(pa++)

	return 0;
}