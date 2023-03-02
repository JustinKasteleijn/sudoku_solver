//
// Created by justi on 12/7/2022.
//

#include <fstream>
#include <iostream>
#include "FileUtils.h"

std::vector<std::string> FileUtils::parseFile(const std::string& filename) {
    const std::string ABSOLUTE_PROJECT_PATH = R"(C:\Users\justi\CLionProjects\sudoku_solver\)";
    std::vector<std::string> file_data;
    std::ifstream file(ABSOLUTE_PROJECT_PATH + filename);
    if(file.is_open()) {
        std::string line;
        while(std::getline(file, line)) {
            file_data.push_back(line);
        }
    }
    file.close();
    return file_data;
}
