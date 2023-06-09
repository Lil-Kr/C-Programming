#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "io_utils.h"

/**
 * 结构体, 实现数值的聚合
 *
 * struc <结构体名>{
 * 	<成员类型> <成员名>;
 * 	....
 * } <结构体变量>
 * @return
 */

int main() {

	/**
	 * 结构体的定义, 同时定义变量 person1
	 */
	struct Person {
		char *id;
		char *name;
		int age;

	} person1;

	/**
	 * 结构体的其他写法
	 * . 符号 成员选择运算符, 优先级比较高
	 *
	 *
	 */
	struct Person person = {"001", "cy", 10};

	PRINT_CHAR(person.id);
	PRINT_INT(person.age);
	PRINT_HEX(&person);

	/**
	 * 定义一个指针
	 */
	struct Person *person_ptr = &person;
	PRINT_INT(sizeof(struct Person));
	PRINT_INT(sizeof(person));

	puts("abc");

	/**
	 * 匿名结构体
	 */
	struct {
		char *id;
		char *name;
		int age;
	} anonymous_person;

	/**
	 * 使用 typedef 定义
	 * 类型名, 简化的一种写法
	 */
	typedef struct Person Person;
	Person person_1 = {"002", "andy"};
	PRINT_INT(person_1.age);
	person_1.age = 11;// 赋值的另一种写法

	/**
	 * 学校
	 */
	typedef struct School {
		char *id;
		char *name;
	};

	/**
	 * 使用 typeof 创建结构体
	 */
	typedef struct Student {
		char *id;
		char *name;
		int age;
		struct School school;
	} Student;

	return 0;
}