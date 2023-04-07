//
// Created by screenly on 2023/2/13.
//
#include "../include/factorial.h"

unsigned int Factorial(unsigned  int n) {
  if(n == 0){
    return 1; // f(0) = 1
  } else {
    return n * Factorial(n - 1); // f(n) = nf(n-1)
  }
}