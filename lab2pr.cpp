#include <iostream>
using namespace std;
/*
void Enum(int current, int n) {
    if (current > n) return; 
    cout << current << " ";
    Enum(current + 1, n); 
}

int main() {
    int n;
    cin >> n;
    Enum(1, n);
    cout << endl;
    return 0;
}*/
/*
void printRange(int a, int b) {
    if (a < b) {
        cout << a << " ";
        printRange(a + 1, b);
    }
    else if (a > b) {
        cout << a << " ";
        printRange(a - 1, b);
    }
    else {
        cout << a << " ";
    }
}

int main() {
    int a, b;
    std::cin >> a;
    std::cin >> b;
    printRange(a, b);
    return 0;
}*/
/*
int sumOfDigits(int n) {
    if (n == 0) return 0; 
    return (n % 10) + sumOfDigits(n / 10); 
}

int main() {
    int n;
    cin >> n;

    cout << "Сумма цифр: " << sumOfDigits(n);
    return 0;
}
*/
/*
void printPrimeFactors(int n, int divisor = 2) {
    if (n < 2) return;

    if (n % divisor == 0) {
        cout << divisor << " ";
        printPrimeFactors(n / divisor, divisor);
    }
    else {
        printPrimeFactors(n, divisor + 1);
    }
}

int main() {
    int n;
    cin >> n;

    printPrimeFactors(n);

    return 0;
}
*/




