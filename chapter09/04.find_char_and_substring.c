#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "io_utils.h"

/**
 * 查找字符与子串
 * @return
 */
int main() {

	char *string = "Hello Word!";

	char *res = strchr(string,'l');
	char *result_reverse = strrchr(string,'l');

	puts(res);
	puts(result_reverse);

	char *string2 = "C, 1932, C++, 1983; Java, 1995, Rust, 2010; Kotlin, 2011";
	char *break_set = ",;";

	int count = 0;
	char *p = string2;

	do {
		p = strpbrk(p, break_set);
		if (p) {
			puts(p);
			p++;
			count++;
		}
	} while (p);

	PRINTLNF("Found %d characters.", count);
//	strpbrk(string2, break_set);


	/**
	 * 查找子串
	 */
	char *substring_position = strstr(string, "Wor");
	puts(substring_position);
	PRINT_INT(substring_position);

	return 0;
}