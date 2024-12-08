#include <iostream>
#include <fstream>
#include <line.hpp>






int main() {
    line* l;
    std::string line;
    std::ifstream runfile("main.ga");
    if (!runfile) {
        std::cerr << "Не удалось открыть файл!" << std::endl;
        return 1; // Возвращаем код ошибки
    }
    
    while (std::getline(runfile, line)) {
        std::cout << line << std::endl; // Выводим каждую строку на экран
    }
    //if(line[0] == '0') {
    //    l.command = '0';
    //    
    //    commands::print(line[1]);
    //}

    // Закрываем файл
    runfile.close();
    return 0;
}