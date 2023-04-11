#include <stdio.h>

/**
 * 宏预处理
 * 编译的时候会做替换工作, 会展开里面的所有东西
 * **/
#define COLOR_RED 0xff0000
#define COLOR_GREEN 0xff0000


/**
 * 常量
 * 程序中定义 const, 只有读权限, 没有写权限
 * @return
 */
int main() {
  /**
   * const <type> -> readonly variable
   */
  const int kRed = 0xff0000;
  printf("kRed: %d \n", kRed);

  int *p_k_red = &kRed;// 获取地址
  *p_k_red = 0;
  printf("kRed point: %d \n", kRed);

  /**
   * macro(宏) micro
   */
  printf("COLOR_RED: %d \n", COLOR_RED);
#undef COLOR_RED // 取消宏定义, 下面再次引用宏就失效了

	/**
	 * 字面量, 尽量不要 hard code, 使用宏替代
	 */
	 3;
	 4u;
	 3l;
	 3.9;
	 'c';
	 "cssss";
	 L'中';
	 L"中国";

	 /**
	  * 硬编码
	  */
	  int bg_color = COLOR_GREEN;

  return 0;
}