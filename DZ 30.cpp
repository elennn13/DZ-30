#include <iostream>
#include <fstream>



int main() {
    // Открываем файл для записи
    std::ofstream outFile("data.txt");

    // Бесконечный цикл для ввода строк
    while (true) {
        std::string line;
        std::cout << "Введите строку (или end для завершения): ";
        std::getline(std::cin, line);

        // Выходим из цикла, если введена строка "end"
        if (line == "end") {
            break;
        }

        // Записываем строку в файл
        outFile << line << std::endl;
    }

    // Закрываем файл для записи
    outFile.close();

    // Открываем файл для чтения
    std::ifstream inFile("data.txt");

    // Считываем строки из файла и выводим их в консоль
    std::string line;
    while (std::getline(inFile, line)) {
        std::cout << line << std::endl;
    }

    // Закрываем файл для чтения
    inFile.close();

    // Удаляем файл
    remove("data.txt");
    return 0;
}