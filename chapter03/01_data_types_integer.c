#include <stdio.h>
#include <limits.h>

/**
 * \n: new line
 *
 * %hd: short decimal
 *
 * %d: decimal
 * %ld: long decimal
 * %lld: long long decimal
 *
 *
 * 进制:
 * 二进制:
 * 八进制: %o
 * 十六进制: %x
 * @return
 */

int main() {
  short int short_int = 0;
  printf("short int %hd \n", short_int);

  int i = 100;
  printf("int in hex: %x\n", i);

  long int long_int = 0;
  long long_a = 0;
  long long longlong_int = 0;

  unsigned int unsigned_int = 123;
  unsigned long unsigned_long = 111;

  printf("short int: %d\n", sizeof(short int));
  printf("int: %d\n", sizeof(int));
  printf("long int: %d\n", sizeof(long int));
  printf("long long: %d\n", sizeof(long long));

  printf("int in hex: %x \n", i);

  printf("max short %d, min %hd \n", SHRT_MAX, SHRT_MIN);
  printf("max int %d, min %d \n", INT_MAX, INT_MIN);
  printf("max long %ld, min %ld \n", LONG_MAX, LONG_MIN);
  printf("unsigned max int %u, unsigned min %d\n", UINT_MAX, 0);

  printf("unsigned int: %u\n", sizeof(unsigned int));
  printf("unsigned long: %u\n", sizeof(unsigned long));

  return 0;
}