#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
#include "Constants.hpp"


namespace ts
{
    void FileReadToVector(std::string filenameOfInputFile, std::vector<int>& arrvec);

    void ReadVectorToConsole(std::vector<int> arrvec);

    int FindMaxValueInVector(std::vector<int> arrvec);

    int FindMinValueInVector(std::vector<int> arrvec);

    void SortVectorMinToMax(std::vector<int>& arrvec);

    void FileWriteVector(std::string filenameOfOutputFile, std::vector<int>& arrvec);

}