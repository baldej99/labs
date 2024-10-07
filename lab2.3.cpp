#include <iostream>
using namespace std;
int func1(int n = 1) {
    if (n <= 0) {
        return 0;
    }
    else {
        int sum = 0;
        for (int i = 1; i <= n; ++i) {
            sum += i;
        }
        return sum;
    }
}
void func2(int a, int b, int& sum, int& mul) {
    sum = a + b;
    mul = a * b;   
}

int main()
{
    int sum = 0;
    int arr[2][3] = { {2,5,7},{6,3,4} };
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            sum += arr[i][j];
        }
    }
    cout << sum << endl;
    int arr2[3];
    for (int i = 0; i < 3; i++) {
        arr2[i] = arr[0][i] + arr[1][i];
        cout << arr2[i] << " " << endl;
    }
    float var = 20.84;
    float& ref1 = var;
    float& ref2 = var;
    ref1 = 2.28;
    cout << ref1 << " " << var << endl;
    cout << func1() << endl;
    int a = 5, b = 10, c, d;
    func2(a, b, c, d);
    cout << c << " " << d << endl;
    int test = 1;
    for (int i = 0; i < 3; i++) {
        cout << test << " ";
        float test2 = 1.11;
        for (int j = 0; j < 3; j++) {
            cout << test2 << " ";
        }
        cout << endl;
    }
}

