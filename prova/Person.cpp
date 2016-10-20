//
// Created by Damiano Giusti on 19/10/16.
//

#include <iostream>
#include "Person.h"

Person::Person() {

}

Person::Person(string name, string surname) {
    this->name = &name;
    this->surname = &surname;
}

void Person::printDisplayName() {
    cout << *this->name << " " << *this->surname << endl;
}

string Person::displayName() {
    return *this->name + " " + *this->surname;
}
