#include <stdio.h>

#define MAX(a, b) (a) > (b) ? (a) : (b)

/**
 *
 * @param a
 * @param b
 * @return
 */
int Max_1(int a, int b) {
  return a > b ? a : b;
}

/**
 * 宏函数
 * @return
 */
int main() {
  int max = MAX(1, 3);
  int max2 = MAX(1, MAX(1,4));
  int max3 = Max_1(1, Max_1(1,4));

  printf("max %d\n", max);
  printf("max2 %d\n", max2);
  printf("max3 %d\n", max3);

  return 0;
}