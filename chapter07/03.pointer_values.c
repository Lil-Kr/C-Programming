#include <stdio.h>
#include "io_utils.h"

/**
 * 野指针
 */
int *pointer_at_large;


/**
 * 特殊的指针
 */
void DangerousPointer() {
  int a = 2;
  pointer_at_large = &a;
}

int main() {

  int *p = (int *)100;

  PRINT_INT(p);
  PRINT_INT(&p);

  return 0;
}