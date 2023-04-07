#include <stdio.h>

/**
 * 内存地址分析
 * @return
 */
int main() {
  int var = 3;

  printf("size of var: %d \n",var);
  printf("address of var: %#x \n", &var);

  return 0;
}