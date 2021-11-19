void ts::FileReadToVector(std::string filenameOfInputFile, std::vector<int>& arrvec)
{
    std::ifstream in(filenameOfInputFile);

    if (!in)
    {
        std::cout << "File do not opened!\n";
    }
    else
    {
        int temp;
        for (int i = 0; !in.eof(); ++i)
        {
            in >> temp;
            arrvec.push_back(temp);
        }
        std::cout << "File copied to array!\n";
    }
}

void ts::ReadVectorToConsole(std::vector<int> arrvec)
{
    for (const auto& v : arrvec)
        std::cout << v << std::endl;
}

int ts::FindMaxValueInVector(std::vector<int> arrvec)
{
    int maxValue = MIN;
    for (const auto& v : arrvec)
        if (v > maxValue)
            maxValue = v;
    return maxValue;
}

int ts::FindMinValueInVector(std::vector<int> arrvec)
{
    int minValue = MAX;
    for (const auto& v : arrvec)
        if (v < minValue)
            minValue = v;
    return minValue;
}

void ts::SortVectorMinToMax(std::vector<int>& arrvec)
{
    std::sort(arrvec.begin(), arrvec.end());
}

void ts::FileWriteVector(std::string filenameOfOutputFile, std::vector<int>& arrvec)
{
    std::ofstream out(filenameOfOutputFile);

    if (!out)
    {
        std::cout << "File do not created!\n";
    }
    else
    {
        for (const auto& v : arrvec)
            out << v << " ";
        std::cout << "Vector writed to file!\n";
    }
}