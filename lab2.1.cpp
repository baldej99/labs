#include <iostream>
using namespace std;
int main()
{
    float a, b;
    cin >> a >> b;
    cout << (a + b) / 2 << endl;
    cout << "Print +,-,* or /";
    char op;
    cin >> op;
    /*if (op == '+') {
        cout << a + b;
    }
    else if (op == '-') {
        cout << a - b;
    } 
    else if (op == '*') {
        cout << a * b;
    }
    else if (op == '/') {
        if (b == 0) {
            cout << "error";
        }
        else {
            cout << a / b;
        }
    }
    else {
        cout << "wrong input";
    }*/
    switch (op) {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        if (b != 0) {
            cout << a / b;
        }
        else {
            cout << "error" << endl;
        }
        break;
    default:
        cout << "wrong input" << endl;
        break;
    }
}

