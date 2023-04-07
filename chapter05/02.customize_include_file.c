#include <stdio.h>

// 使用"", 或通过<>, 使用<>需要在CMakeLists文件中添加指定目录
#include "include/factorial.h"

/**
 * #ifdef 如果定义了
 * #ifndef  如果没定义
 * #if 如果....
 *
 * 结尾: #endif
 * @return
 */


#define DEBUG

void dump(char *msg) {
#ifdef DEBUG
  puts(msg);
#endif
}

int main(){
  dump("main start");

  printf("Hello \n");
//  printf("3! = %d \n", Factorial(3));

  dump("main end");
  return 0;
}