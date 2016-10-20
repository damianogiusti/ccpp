//
// Created by Damiano Giusti on 20/10/16.
//

#ifndef C_LINKED_LIST_LINKEDLIST_H
#define C_LINKED_LIST_LINKEDLIST_H

typedef struct {
    int value;
    struct Node *next;
    struct Node *previous;
} Node;

typedef struct {
    Node *first_node;
    Node *last_node;
    int size;

} LinkedList;


LinkedList* init_linked_list();

void add(LinkedList *, int);

int remove_item(LinkedList *, int);

#endif //C_LINKED_LIST_LINKEDLIST_H
