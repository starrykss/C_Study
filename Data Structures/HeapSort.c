#include <stdio.h>
#include <stdlib.h>

#define MAX_HEAP_NODE	200

typedef int HNode;

HNode heap[MAX_HEAP_NODE];
int heap_size;

#define Key(n)   (n) 
#define Parent(i) (heap[i/2])		// i의 부모 노드 
#define Left(i) (heap[i*2])		// i의 왼쪽 자식 노드 
#define Right(i) (heap[i*2+1])	// i의 오른쪽 자식 노드 

void error(char str[]) {
	printf("%s\n", str);
	exit(1);
}

void init_heap() { heap_size = 0; }
int is_empty_heap() { return heap_size == 0; }
int is_full_heap() { return (heap_size == MAX_HEAP_NODE - 1); }
HNode find_heap() { return heap[1]; }

void insert_max_heap(HNode n) {
	int i;
	if (is_full_heap()) return;
	i = ++(heap_size);
	while (i != 1 && Key(n) > Key(Parent(i))) {
		heap[i] = Parent(i);
		i /= 2;
	}
	heap[i] = n;
}

HNode delete_max_heap() {
	HNode hroot, last;
	int parent = 1, child = 2;

	if (is_empty_heap() != 0)
		error("힙 트리 공백 에러");

	hroot = heap[1];
	last = heap[heap_size--];
	while (child <= heap_size) {
		if (child<heap_size && Key(Left(parent))<Key(Right(parent)))
			child++;
		if (Key(last) >= Key(heap[child]))
			break;
		heap[parent] = heap[child];
		parent = child;
		child *= 2;
	}
	heap[parent] = last;
	return hroot;
}

void print_heap() {
	int i, level;
	for (i = 1, level = 1; i <= heap_size; i++) {
		if (i == level) {
			printf("\n");
			level *= 2;
		}
		printf("%2d ", Key(heap[i]));
	}
	printf("\n-----------");
}

void print_array(int *data, int size, char *msg) {
    printf("%s: ", msg);
    for (int i = 0; i < size; i++) {
        printf("%2d ", data[i]);
    }
    printf("\n");
}

void main() {
	int i, data[8] = {71, 49, 92, 55, 38, 82, 72, 53};
    print_array(data, 8, "정렬 전");
    init_heap();
    for (i = 0; i < 8; i++) {
        insert_max_heap(data[i]);
    }
    
    // 오름차순 출력
    for (i = 7; i >= 0; i--) {
        data[i] = Key(delete_max_heap());
    }
    print_array(data, 8, "정렬 후");

    // 내림차순 출력
	/*
    for (i = 0; i <= 9; i++) {
        data[i] = Key(delete_heap());
    }
    print_array(data, 10, "정렬 후");
    */
}