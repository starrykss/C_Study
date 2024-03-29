// 2차원 배열의 다양한 초기화 방법
// 행 초깃값을 생략하면 그 행의 남는 요소는 0으로 자동 초기화됨.
// 2차원 배열을 초기화한 경우 행의 수를 생략하고 선언할 수 있음.
// 2차원 배열은 기본적으로 1차원 배열을 초기화하는 방식과 같음.
// 한 행의 크기는 열의 수로 결정하므로 열의 개수는 생략할 수 없음.
// 2차원 배열은 1차원 배열을 요소로 갖는 1차원 배열임.
/*
#include <stdio.h>

int main(void) {
	int num1[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };
	int num2[3][4] = { {1}, {5, 6}, {9, 10, 11} };
	int num3[][4] = { {1}, {2, 3}, {4, 5, 6} };
	int num4[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	int num5[3][4] = { 1, 2, 3, 4, 5, 6 };
	int num6[][4] = { 1, 2, 3, 4, 5, 6 };
	int num7[3][4] = { 0 };			// 배열의 모든 저장 공간을 0으로 초기화.
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("%5d", num1[i][j]);
		}
		printf("\n");
	}

	return 0;
}
*/