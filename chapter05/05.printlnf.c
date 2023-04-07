#include <stdio.h>
#include <stdarg.h> // 读取变长参数

#define PRINTLNF(format, ...)

void Printlnf(const char* format, ...) {
  va_list args;
  va_start(args,format);

  vprintf(format, args);
  printf("\n");

  va_end(args);
}


int main(){

  int va = 2;

  Printlnf("hello! %d",va);
  printf("a");

  return 0;
}