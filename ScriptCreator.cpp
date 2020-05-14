/*
    Author: Asrın "Syntriax" Doğan
    Date: 15/10/2019
    Description: 
    Takes a full path of a file named like "Ders1_Ornek123.cpp"
    and creates a copy of it named "Ders1_Ornek124.cpp" at the same folder.
*/
#include <iostream>
#include <fstream>
#include <string>

#define ExtensionSize 4
#define StandartFileNameSize 11

int main(int argc, char const *argv[])
{
    std::string sourcePath;
    std::string destinationPath;
    std::string fileName;
    char fileNameSize;
    char scriptCount;
    
    if(argc <= 1)
    {
        std::cout << "Eksik Arguman";
        return 0;
    }

    sourcePath = argv[1];
    
    fileName = sourcePath.substr(sourcePath.find_last_of('\\') + 1);
    fileNameSize = fileName.size();

    scriptCount = std::stoi(fileName.substr(StandartFileNameSize, fileNameSize - StandartFileNameSize - ExtensionSize));
    scriptCount++;

    destinationPath = sourcePath.substr(0, sourcePath.find_last_of('\\') + 1);
    destinationPath.append(fileName.substr(0, StandartFileNameSize));
    destinationPath.append(std::to_string(scriptCount));
    destinationPath.append(fileName.substr(fileName.find_last_of('.'), ExtensionSize));

    std::ifstream f(destinationPath);
    if(f.good())
    {
        std::cout << "File already Exists!";
        return 0;
    }

    std::ifstream  src(sourcePath, std::ios::in);
    std::ofstream  dst(destinationPath,   std::ios::out);
    dst << src.rdbuf();

    std::cout << "New File Created at: " << destinationPath << "\n";
    
    return 0;
}
