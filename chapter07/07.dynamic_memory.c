#include <stdio.h>
#include <stdlib.h>
#include "io_utils.h"

#define PLAYER_COUNT 10


/**
 * 动态内存分配
 * malloc -> 分配内存
 * calloc -> 分配内存之后自动释放
 * @return
 */





int main() {
	/**
	 * 动态内存申请
	 */
	int *players = malloc(sizeof (int) * PLAYER_COUNT);

	for (int i = 0; i < PLAYER_COUNT; ++i) {
		players[i] = i + 1;
	}

	PRINT_INT_ARRAY(players, PLAYER_COUNT);

	/**
	 * 内存释放
	 */
	free(players);
	return 0;
}