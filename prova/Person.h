//
// Created by Damiano Giusti on 19/10/16.
//

#ifndef PROVA_TESTCLASS_H
#define PROVA_TESTCLASS_H

#include <string>

using namespace std;

class Person {
private:
    string* name;
    string* surname;

public:
    Person();
    Person(string name, string surname);
    void printDisplayName();
    string displayName();
};


#endif //PROVA_TESTCLASS_H
