#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"

void init(ArrayList* L) {
    L->size = 0;
    L->capacity = 2;
    L->data = (int*)malloc(sizeof(int) * L->capacity);
}

void insertLast(ArrayList* L, int item) {
    if (L->size == L->capacity) {
        printf("\n[System] Capacity reached %d. Increasing size...\n", L->capacity);
        L->capacity *= 2;
        L->data = (int*)realloc(L->data, sizeof(int) * L->capacity);
        
        if (L->data == NULL) {
            fprintf(stderr, "Memory allocation failed!\n");
            exit(1);
        }
        printf("[Success] Capacity increased to %d\n", L->capacity);
    }
    L->data[L->size++] = item;
}

void printList(ArrayList* L) {
    printf("Current List: ");
    for (int i = 0; i < L->size; i++) {
        printf("%d ", L->data[i]);
    }
    printf("| Size: %d | Capacity: %d\n", L->size, L->capacity);
}

void freeList(ArrayList* L) {
    free(L->data);
}