//
// Created by Damiano Giusti on 19/10/16.
//

#ifndef PROVA_FILEMANAGER_H
#define PROVA_FILEMANAGER_H

#include <fstream>
#include <string>

class FileManager {

public:
    static std::string readFile(std::string);
    static void writeStringToFile(std::string, std::string);
};


#endif //PROVA_FILEMANAGER_H
