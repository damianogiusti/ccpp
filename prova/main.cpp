#include <iostream>
#include "Person.h"
#include "FileManager.h"

using namespace std;

int main() {
    cout << "Hello world\n";

    int value = 100;
    int *pInt = &value;

    cout << value << endl;
    cout << pInt << endl;
    cout << *pInt << endl;

    Person *person = new Person("Damiano", "Giusti");
    person->printDisplayName();

    FileManager::writeStringToFile("person.txt", person->displayName());
    string readFile = FileManager::readFile("person.txt");

    cout << readFile;

    return 0;
}