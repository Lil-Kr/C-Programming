#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "io_utils.h"


/**
 * 结构体的内存对齐
 *
 * @return
 */
int main() {

	typedef struct Student {
		char *id;
		int age;
		char *name;
	} Student;

	/**
	 * 结构体的字段部剧与内存息息相关
	 */
	struct Student student = {.id="001", .name="cy"};
	student.age = 12;
	return 0;
}