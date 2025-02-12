#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

int main() {
    vector v;
    init(&v);

    push_back(&v, 10);
    push_back(&v, 20);
    push_back(&v, 30);

    printf("마지막 원소: %d\n", back(&v)->num);
    printf("%lld %lld\n", v.size, v.capacity);

    pop_back(&v);

    printf("마지막 원소(삭제 후): %d\n", back(&v)->num);
    printf("%lld %lld\n", v.size, v.capacity);

    for (int i = 0; i < v.size; i++) {
        printf("%d ", v.arr[i]);
    }
    printf("\n");

    free_vector(&v);
    printf("%lld %lld\n", v.size, v.capacity);

    return 0;
}