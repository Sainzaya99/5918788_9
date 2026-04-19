#ifndef ARRAYLIST_H
#define ARRAYLIST_H

typedef struct {
    int* data;
    int size;
    int capacity;
} ArrayList;

void init(ArrayList* L);
void insertLast(ArrayList* L, int item);
void printList(ArrayList* L);
void freeList(ArrayList* L);

#endif