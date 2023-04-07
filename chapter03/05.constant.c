#include <stdio.h>

// 宏预处理
#define COLOR_RED 0xff0000


/**
 * 常量
 * 程序中定义 const, 只有读权限, 没有写权限
 * @return
 */
int main() {
  // const
  const int kRed = 0xff0000;
  printf("kRed: %d \n", kRed);

  int *p_k_red = &kRed;// 获取地址
  *p_k_red = 0;
  printf("kRed point: %d \n", kRed);

  // macro(宏) micro
  printf("COLOR_RED: %d \n", COLOR_RED);

  return 0;
}