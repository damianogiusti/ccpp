//
// Created by Damiano Giusti on 20/10/16.
//

#include <stdlib.h>
#include "linkedlist.h"

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

void remove(LinkedList *list, int value) {

}

