#include  <stdio.h>

/**
 * 函数递归
 * @return
 */
unsigned int Factorial(unsigned  int n){
  if(n == 0){
    return 1; // f(0) = 1
  } else {
    return n * Factorial(n - 1); // f(n) = nf(n-1)
  }
}

unsigned int Fibonacci(unsigned int n) {
  if (n == 1 || n == 0) {
	return n;
  } else {
	return Fibonacci(n);
  }
}

int main(void) {
  printf("3! : %d\n", Factorial(3));

  return 0;
}