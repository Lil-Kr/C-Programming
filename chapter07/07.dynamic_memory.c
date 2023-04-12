#include <stdio.h>
#include <stdlib.h>
#include "io_utils.h"

#define PLAYER_COUNT 10

void InitPointer(int **ptr, int length, int default_value) {
	*ptr = malloc(sizeof(int) * length);
	for (int i = 0; i < length; ++i) {
		(*ptr)[i] = default_value;
	}
}


/**
 * 动态内存分配
 * malloc -> 分配内存
 * calloc -> 分配内存之后自动释放
 *
 * 常见的指针使用错误
 * 	1. 忘记在使用完毕之后释放内存
 * 	2. 使用了已经释放的内存
 * 	3. 使用了超出边界的内存
 * 	4. 改变了内存的指针, 导致无法正常释放
 *
 * 动态内存使用建议
 * 	1. 避免修改指向已分配的内存的指针
 * 	2. 对于free之后的指针主动置为NULL
 * 	3. 避免将过多的指针指向动态分配的内存
 * 	4. 动态内存遵循谁分配谁释放的原则
 * @return
 */
int main() {
	/**
	 * 动态内存申请
	 * 	1. 通过 malloc 分配的内存是在堆这个区域
	 */
//	int *players = malloc(sizeof (int) * PLAYER_COUNT);
	int *players;
	InitPointer(&players, PLAYER_COUNT, 0);

	for (int i = 0; i < PLAYER_COUNT; ++i) {
		PRINT_INT(players[i]);
		players[i] = i + 1;
	}

	PRINT_INT_ARRAY(players, PLAYER_COUNT);

	/**
	 * 释放内存
	 */
	free(players);

	printf("==================================================\n");

	/**
	 * 2. 使用calloc()分配内存
	 * 	2.1 返回的内存会被清空
	 */
	int *a;
	a = calloc(PLAYER_COUNT, sizeof (int));

	for (int i = 0; i < PLAYER_COUNT; ++i) {
		PRINT_INT(a[i]);
		a[i] = i + 1;
	}
	PRINT_INT_ARRAY(a, PLAYER_COUNT);

	/**
	 * 重新分配内存
	 */
	a = realloc(a, PLAYER_COUNT * 2 * sizeof(int));
	PRINT_INT_ARRAY(a, PLAYER_COUNT * 2);
	for (int i = 0; i < PLAYER_COUNT; ++i) {
		PRINT_INT(a[i]);
		a[i] = i + 1;
	}

	PRINT_INT(a);

	/**
	 * 释放内存之前
	 */
	if (a) {
		free(a);
	}

	printf("==================================================\n");

	return 0;
}