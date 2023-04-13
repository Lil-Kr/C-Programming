#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "io_utils.h"

/**
 * 字符串的拆分
 * @return
 */
int main() {

	/**
	 *
	 */
	char *string = "C, 1932; C++, 1983; Java, 1995; Rust, 2010; Kotlin, 2011;";

	typedef struct {
		char *name;
		int year;
	} Language;

	const char *language_break = ";";
	const char *field_break = ",";

	int language_capacity = 3;
	int language_size = 0;

	// 分配内存
	Language *languages = malloc(sizeof(Language) * language_capacity);

	char *next = strtok(string, field_break);
	while (next) {
		Language language;
		language.name = next;
		next = strtok(NULL, language_break);
		if (next) {
			language.year = atoi(next);

			/**
			 * 重新分配内存
			 */
			if (language_size + 1 >= language_capacity) {
				language_capacity *= 2;
				languages = realloc(languages, sizeof (Language) * language_capacity);
				if (!languages) {
					abort();
				}
			}
			languages[language_size++] = language;
			next = strtok(NULL, field_break);
		}
	}

	PRINTLNF("languages: %d", language_size);
	PRINTLNF("languages capacity: %d", language_capacity);

	for (int i = 0; i < language_size; ++i) {
		PRINTLNF("Language[name=%s, year=%d]");
	}

//	strtok();
	return 0;
}