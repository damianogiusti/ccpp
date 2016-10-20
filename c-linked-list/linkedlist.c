//
// Created by Damiano Giusti on 20/10/16.
//

#include <stdlib.h>
#include "linkedlist.h"

/*
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
*/

LinkedList *init_linked_list() {
    LinkedList *list = malloc(sizeof(LinkedList));
    list->first_node = list->first_node = 0;
    list->size = 0;
    return list;
}

void add(LinkedList *list, int value) {
    // init a new Node and set it's value
    Node *node = malloc(sizeof(Node));
    node->value = value;

    if (list->first_node == 0 && list->last_node == 0) {
        node->next = 0;
        node->previous = 0;
        list->first_node = list->last_node = node;
    } else {
        node->previous = list->last_node;
        node->next = 0;
        list->last_node = node;
    }
}

int remove_item(LinkedList *list, int value) {
    Node *node = list->first_node;

    while (node != 0) {
        if (node->value == value) {
            Node *previous = node->previous;
            Node *next = node->next;
            if (previous != 0)
                previous->next = next;
            if (next != 0)
                next->previous = previous;
            return 0;
        } else {
            node = node->next;
        }
    }
    return -1;
}

