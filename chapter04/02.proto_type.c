#include  <stdio.h>

/**
 * 函数的原型
 * 函数调用
 * 1. 需要拥有函数名
 * 2. 函数返回值类型, 如果没有写, 默认为int
 * 3. 函数参数列表, 参数类型, 和参数顺序, 参数形参名不重要
 *
 * 变量类型
 * 1. 自动变量auto
 * 2. 静态变量 static
 * 3. 寄存器变量 register
 *
 * @return
 */
void EmptyPararmList(int number) {
  printf("EmptyPararmList + %d\n", number);
}

int main(void) {

  EmptyPararmList(1);
  EmptyPararmList(2);
  EmptyPararmList(3);

  return 0;
}