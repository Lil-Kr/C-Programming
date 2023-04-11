#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "io_utils.h"


long exchange (long *xp, long y) {
	long x = *xp;
	*xp = y;
	return x;
}


int main() {

	int a = 10;
	int b = a;

	printf("a");
	return 0;
}