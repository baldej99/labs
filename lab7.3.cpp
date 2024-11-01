#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double radius;
    std::cout << "Введите радиус окружности: ";
    std::cin >> radius;
    double circle = 2 * M_PI * radius;
    cout << "Длина окружности: " << round(circle * 1000) / 1000 << endl;
    cout << "Введите строку: " << endl;
    fstream fs;
    string str;
    cin.ignore(); 
    getline(cin, str); 
    fs.open("a.txt", ios::app); 
    if (fs.is_open()) {
        fs << str << endl; 
        fs.close(); 
    }
    else {
        cout << "Не удалось открыть файл для записи." << endl;
    }
    cout << "Введите read, erase или exit: " << endl;
    string cmd;
    cin >> cmd;
    while (true) {
        if (cmd == "read") {
            fs.open("a.txt", ios::in);
            if (fs.is_open()) {
                string line;
                cout << "Содержимое файла:" << endl;
                while (getline(fs, line)) {
                    cout << line << endl; 
                }
                fs.close(); 
            }
            else {
                cout << "Не удалось открыть файл для чтения." << endl;
            }
        }
        else if (cmd == "erase") {
            fs.open("a.txt", ios::out | ios::trunc); 
            fs.close(); 
            cout << "Содержимое файла очищено." << endl;
        }
        else if (cmd == "exit") {
            
            break; 
        }
        else {
            cout << "Неизвестная команда. Пожалуйста, введите 'read', 'erase' или 'exit'." << endl;
        }
        cout << "Введите команду (read, erase, exit): ";
        cin >> cmd; 
    }

    return 0;
}



