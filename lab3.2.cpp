#include <iostream>
using namespace std;
int sumArray(int* start, int* end) {
    int sum = 0;
    for (int* ptr = start; ptr != end; ++ptr) {
        sum += *ptr;
    }
    return sum;
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}
int (*selectFunction(char operation))(int, int) {
    if (operation == '+') {
        return add;
    }
    else if (operation == '-') {
        return subtract;
    }
    else {
        return nullptr; 
    }
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int sum = sumArray(arr, arr + 5); 
    cout << sum << endl;
    char operation = '+'; 
    int (*selectFunc)(int, int) = selectFunction(operation);
    if (selectFunc != nullptr) {
        int result = selectFunc(5, 6);
        cout << result << endl;
    }
    float* a = new float(2.5);
    cout << *a << endl;
    delete a;
    return 0;
}
