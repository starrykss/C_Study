// ���� �Ҵ� ������ �迭ó�� ���
/*
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int *pi;			// ���� �Ҵ� ������ ������ ������
	int i, sum = 0;	// �ݺ� ���� ������ ���� ����

	pi = (int *)malloc(5 * sizeof(int));		// ���� ���� 20����Ʈ �Ҵ�
	if (pi == NULL) {
		printf("�޸𸮰� �����մϴ�!\n");
		exit(1);
	}

	printf("�ټ� ���� ���̸� �Է��ϼ���: ");
	for (i = 0; i < 5; i++) {
		scanf("%d", &pi[i]);			// �迭 ��ҿ� �Է�
		sum += pi[i];						// �迭 ����� �� ����
	}
	printf("�ټ� ���� ��� ���� : %.1lf\n", (sum / 5.0));		// ��� ���� ���
	free(pi);
	
	return 0;
}
*/