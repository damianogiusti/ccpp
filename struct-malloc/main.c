//
// Created by Damiano Giusti on 20/10/16.
//

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct {
    char *name;
    char *surname;
    int age;
    char *display_name[100];
} Person;

void evaluate_display_name(Person *person) {
    strcat(person->display_name, person->name);
    strcat(person->display_name, " ");
    strcat(person->display_name, person->surname);
}

int main() {

    Person *person = malloc(sizeof(Person));
    person->name = "Name";
    person->surname = "Surname";
    person->age = 18;

    evaluate_display_name(person);

    printf("%s", person->display_name);

    free(person);

    return 0;
}