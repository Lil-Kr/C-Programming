#include <stdio.h>
#include "io_utils.h"

/**
 * 二维数组
 * @return
 */


void SumIntArrays(int rows, int columns, int array[][columns]) {
	int res[rows];
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < columns; ++j) {
			res[i] += array[i][j];
		}
	}
}



int main() {

	/**
	 * 初始化 1
	 */
	int vehi_limit[5][2];

	/**
	 * 初始化2
	 */
	int vehi_limits[5][2] = {
			{0, 5},
			{1, 6},
			{2, 7},
			{3, 8},
			{4, 9},
	};

	/**
	 * 初始化 3
	 * 去掉括号
	 */
	int vehi_limits3[5][2] = {
			0, 5,
			1, 6,
			2, 7,
			3, 8,
			4, 9,
	};

	/**
	 * 初始化 4
	 * 去掉括号
	 */
	int vehi_limits4[5][2] = {
			0, 5,
			1, 6,
			2, 7,
			3, 8,
			4, 9,
	};

	vehi_limit[0];

	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 2; ++j) {
			vehi_limit[i][j] = i + j;
		}
	}

	return 0;
}