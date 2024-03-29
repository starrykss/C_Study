// a+ 모드로 파일의 내용을 확인하며 출력
// 파일의 입력과 출력을 서로 전환할 때마다 fseek 함수를 호출해야 함.
/*
#include <stdio.h>
#include <string.h>

int main(void) {
	FILE *fp;
	char str[20];

	fp = fopen("a.txt", "a+");		// 읽기 가능한 추가 모드로 개방
	if (fp == NULL) {
		printf("파일을 만들지 못했습니다.\n");
		return 1;
	}

	while (1) {
		printf("파일 이름 : ");
		scanf("%s", str);
		if (strcmp(str, "end") == 0) {		// end 입력 시 종료
			break;
		}
		else if (strcmp(str, "list") == 0) {		// list를 입력하면 파일의 내용 확인
			fseek(fp, 0, SEEK_SET);				// 버퍼의 위치 지시자를 맨 처음으로 이동
			while (1) {
				fgets(str, sizeof(str), fp);			// 항목 이름을 읽는다.	
				if (feof(fp)) {							// 파일의 내용을 모두 읽으면 종료
					break;
				}
				printf("%s", str);						// 읽은 항목 이름을 화면에 출력
			}
		}
		else {
			fprintf(fp, "%s\n", str);				// 입력한 항목 이름을 파일에 출력
		}
	}
	fclose(fp);

	return 0;
}
*/