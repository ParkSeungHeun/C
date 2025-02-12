#pragma once
#ifndef VECTOR_H
#define VECTOR_H

#include <stdio.h>
#include <stdlib.h>

typedef long long ll;

typedef struct node {
	int num;
} node;

typedef struct vector {
	node* arr;
	ll size;
	ll capacity;
} vector;

void init(vector* v);
void push_back(vector* v, int num);
void pop_back(vector* v);
node* back(vector* v);
void free_vector(vector* v);
#endif
