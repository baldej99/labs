#include <iostream>
#include <string>
using namespace std;

int main()
{
    //7.1
    setlocale(LC_ALL, "RU");
    string s;
    cout << "Введите строку" << endl;
    getline(cin, s);
    cout << s.substr(1, 3) << endl;
    int index = s.find("a");
    if (index < s.size()) {
        cout << index << endl;
    }
    else {
        cout << "Символа не найдено" << endl;
    }
   

    

}


