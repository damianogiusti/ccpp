//
// Created by Damiano Giusti on 19/10/16.
//

#include "FileManager.h"


std::string FileManager::readFile(std::string fileName) {
    std::string content = "";
    std::ifstream *file = new std::ifstream;
    file->open(fileName);

    std::string row = "";
    while (getline(*file, row)) {
        content += row + "\n";
    }

    file->close();
    delete file;
    return content;
}

void FileManager::writeStringToFile(std::string fileName, std::string stringToWrite) {
    std::ofstream *file = new std::ofstream;
    file->open(fileName);
    *file << stringToWrite;
    file->close();
    delete file;
    return;
}
