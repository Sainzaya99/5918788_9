#include <stdio.h>
#include "ArrayList.h"

int main() {
    ArrayList list;
    init(&list);

    printf("--- Starting ArrayList Test ---\n");

    for (int i = 1; i <= 5; i++) {
        insertLast(&list, i * 10);
        printList(&list);
    }

    freeList(&list);
    return 0;
}