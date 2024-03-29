#include <stdio.h>

void printStep(int list[], int num, int begin) {
    printf("  Step %d =", begin);
    for (int i = 0; i < num; i++) {
        printf("%2d", list[i]);
    }
    printf("\n");
}

void printArray(int list[], int end, char *content) {
    printf("%s = ", content);
    for (int i = 0; i < end; i++) {
        printf("%2d", list[i]);
    }
    printf("\n");
}

void insertion_sort(int list[], int n) {
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = list[i];
        for (j = i - 1; j >= 0 && list[j] > key; j--) {
            list[j + 1] = list[j];  // 레코드의 오른쪽 이동
        }
        list[j + 1] = key;
        printStep(list, n, i);
    }
}

void main() {
    int list[8] = {7, 4, 9, 6, 3, 8, 7, 5};
    printArray(list, 8, "Original");
    insertion_sort(list, 8);
    printArray(list, 8, "Insertion");
}