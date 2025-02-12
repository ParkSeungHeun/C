#include "vector.h"

// 자료형, 코테에서 요구하는 거
// 자료의 뒷 삽입, 삭제, 인덱스 조회

void init(vector* v) {
	v->arr = (node*)malloc(sizeof(node) * 64);
	v->size = 0;
	v->capacity = 64;
}

void push_back(vector* v, int num)
{
	// 만약 최대크기면 벡터의 크기를 늘려주고 realloc
	if (v->size + 1 > v->capacity) {
		ll up_size = v->capacity * 2;
		v->arr = (node*)realloc(v, sizeof(node) * up_size);
		v->capacity = up_size;
	}
	
	v->arr[v->size].num = num;
	v->size++;
}

void pop_back(vector* v)
{
	if (v->size > 0) {
		v->size--;
	}
	else {
		printf("원소가 존재하지 않음");
	}
}

node* back(vector* v)
{
	if (v->size == 0) {
		printf("원소가 존재하지 않음");
		return NULL;
	}
	node* ret = &v->arr[v->size - 1];
	return ret;
}

void free_vector(vector* v) {
	if (v->arr) {
		free(v->arr);
		v->arr = NULL;
	}
	v->size = 0;
	v->capacity = 0;
}