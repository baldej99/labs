#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    while (true) {
        cout << "Введите положительное целое число: ";
        cin >> n;
        if (n > 0) {
            break; 
        }
        else {
            cout << "Сказано же, ПОЛОЖИТЕЛЬНОЕ ЧИСЛО\n";
        }
    }
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    cout << sum << endl;
    int arr[10] = { 2, 5, 8, 10, 12, 15, 20, 22, 25, 30 };
    for (int i = 0; i < 10; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 10; i ++) {
        if (i % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    int oddSum = 0;
    for (int i = 1; i < 10; i += 1) {
        if (i % 2 == 1) {
            oddSum += arr[i];
        }
    }
    cout << oddSum;

    return 0;
}

