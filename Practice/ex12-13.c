// strcmp, strncmp �Լ��� ����� ���ڿ� ��
// strncmp �Լ��� �� ��° �μ��� ���� ���� ���� ������ �� ����.
// strcmp �Լ��� ��ȯ���� �׻� ���� ������ �ǹ��ϴ� ���� �ƴ�.
// strcmp �Լ��� ������ �ƽ�Ű �ڵ尪�� ����.
/*
 * strcmp(str1, str2) 
 * str1�� str2���� ������ ���߿� ������ 1 ��ȯ
 * str1�� str2���� ������ ���� ������ -1 ��ȯ
 * str1�� str2�� ���� ���ڿ��̸� 0 ��ȯ
 */
/*
#include <stdio.h>
#include <string.h>

int main(void) {
	char str1[80] = "pear";;
	char str2[80] = "peach";

	printf("������ ���߿� ������ ���� �̸� : ");
	if (strcmp(str1, str2) > 0) {		// str1�� str2 ���� ũ�� (������ ���߿� ������)
		printf("%s\n", str1);			// str1 ���
	}
	else
		printf("%s\n", str2);			// �׷��� ������ str2 ���

	printf("�տ��� 3���� ���ڸ� ���ϸ� ");
	if (strncmp(str1, str2, 3) == 0)		// �տ��� 3���� ���ڰ� ������ 0 ��ȯ
		printf("����.\n");
	else
		printf("�ٸ���.\n");

	return 0;
}
*/