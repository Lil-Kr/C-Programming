#include <stdio.h>

/**
 * 浮点类型
 * float: 单精度
 * double: 双精度
 * @return
 */
int main() {

  float a_float = 3.14f; // 6 +-10^37 ~ 10^-37
  double a_double = 3.14; // 15 ~ 16 的有效数
  printf("size of float: %d \n", sizeof(float));
  printf("size of double: %d \n", sizeof(double));

  return 0;
}