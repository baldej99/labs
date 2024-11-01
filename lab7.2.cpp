#include <iostream>
#include <string>
#include <regex>
using namespace std;
bool nameCheck(string name) {
    regex reg("^[A-Z][a-zA-Z]{1,31}$");
    return regex_search(name, reg);
}


int main()
{
    setlocale(LC_ALL, "RU");
    string name;
    cout << "Введите имя" << endl;
    getline(cin, name);
    if (!nameCheck(name)) {
        cout << "Некорректное имя" << endl;
    }
    string emails;
    getline(cin, emails);
    regex email_regex("([a-zA-Z0-9]+@[a-zA-Z0-9-]+\.[a-zA-Z]{2,})");
    sregex_iterator iter(emails.begin(), emails.end(), email_regex);
    sregex_iterator end;

    cout << "Найденные e-mail адреса: ";
    for (; iter != end; ++iter) {
        std::cout << iter->str() << std::endl;
    }

    

    
}

