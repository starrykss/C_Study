// 유효숫자 확인

// float 유효숫자 : 7
// double 유효숫자 : 15
// long double 유효숫자 : 15 이상

// 정수형을 기본으로 사용하고 실수형은 꼭 필요한 경우만 사용.
// 실수형은 유효숫자가 많은 double형을 기본으로 사용.
// float형 변수를 사용해야 한다면 저장할 값도 1.23f와 같이 실수값 뒤에 f(혹은 대문자 F)를 붙여 4바이트 크기의 상수로 처리될 수 있도록 작성하는 것이 좋음.


/*
#include <stdio.h>

int main(void) {
	float ft = 1.234567890123456789;		// 유효숫자가 많은 값으로 초기화
	double db = 1.234567890123456789;

	printf("float형 변수의 값 : %.20f\n", ft);				// 소수점 이하 20자리까지 출력
	printf("double형 변수의 값 : %.20lf\n", db);		

	return 0;
}
*/