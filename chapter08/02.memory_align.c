#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "io_utils.h"


/**
 *
 * @return
 */


int main() {

	typedef struct Student {
		char *id;
		char *name;
		int age;
	} Student;

	struct Student student = {"001", "cy"};
	student.age;
	return 0;
}