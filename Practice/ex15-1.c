// 포인터와 2중 포인터의 관계
// 첫 번째 별은 가리키는 변수의 자료형이며 두 번째 별은 자신의 자료형
// 2중 포인터에 저장할 주소가 어떤 자료형의 주소인지를 파악함.
// 주소 상수에는 주소 연산자를 쓸 수 없음. => &(&a);   // 사용 불가능
// 2중 포인터의 주소는 3중 포인터에 저장.
/*
#include <stdio.h>

int main(void) {
	int a = 10;		// int형 변수의 선언과 초기화
	int *pi;			// 포인터 선언
	int **ppi;			// 2중 포인터 선언

	pi = &a;			// int형 변수의 주소를 포인터에 저장
	ppi = &pi;		// 포인터의 주소를 2중 포인터에 저장

	printf("----------------------------------------------------------\n");
	printf("변수   변수값    &연산     *연산     **연산 \n");
	printf("----------------------------------------------------------\n");
	printf("  a%10d%10u\n", a, &a);
	printf(" pi%10u%10u%10d\n", pi, &pi, *pi);
	printf("ppi%10u%10u%10u%10u\n", ppi, &ppi, *ppi, **ppi);
	printf("----------------------------------------------------------\n");

	return 0;

}
*/