#include <stdlib.h>
#include "linkedlist.h"
#include <stdio.h>

void apply_to_value(int value, void(*pf)(int)) {
    (*pf)(value);
}

void printInt(int value) {
    printf("%d", value);
}

int main() {

    LinkedList *linkedList = init_linked_list();
    add(linkedList, 2);
    add(linkedList, 3);
    remove_item(linkedList, 2);

    apply_to_value(100, &printInt);
    return 0;
}