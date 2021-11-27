//При написании кода придерживайтесь рекомендаций, которые обсуждали на лекциях:
//1.	Название функции соответствует тому, что она делает
//2.	Одна задача - одна функция
//3.	Разбитие на файлы
//4.	Используйте пространства имен
//
//Оформите ввод, вывод и обработку данных в виде функций и процедур (пример был дан в лекции)
//
//Вариант 1.
//Введите последовательность целых чисел длиной не более 1000 элементов. Найдите минимальный и максимальный элемент,
//отсортируйте последовательность по возрастанию.
//
#include "Functions.hpp"

int main()
{
    std::vector<int> intarray;                                 // Создаю вектор (динамический массив)
    ts::FileReadToVector(filenameOfInputFile, intarray);                  // Читаю в вектор содержимое файла

    std::cout << "Unsorted: " << std::endl;
    ts::ReadVectorToConsole(intarray);

    int maxValue = ts::FindMaxValueInVector(intarray);
    std::cout << maxValue << std::endl;

    int minValue = ts::FindMinValueInVector(intarray);
    std::cout << minValue << std::endl;

    ts::SortVectorMinToMax(intarray);

    std::cout << "Output file saved!" << std::endl;

    ts::FileWriteVector(filenameOfOutputFile, intarray);

    std::cout << "Sorted: " << std::endl;
    ts::ReadVectorToConsole(intarray);

    return 0;
}
