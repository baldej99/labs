/*#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");
    cout << "First string\n";
    cout << "Первая строка\n" << "Вторая строка\n";
    cout << "Спецсимволы \"\"";

}*/
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");
    int a = 150;
    float b = 15.933;
    unsigned short c = 250;
    cout << "a = " << a << endl << "b = " << b << endl << "c = " << c << endl;
    unsigned short day = 10;
    string month = "декабря";
    unsigned int year = 2005;
    cout << "Моя дата рождения:" << day << " " << month << " " << year << " " << "года";
    const float c1 = 2.3;
    const string c2 = "WINDOWS";
    cout << c1 << " " << c2;

}
