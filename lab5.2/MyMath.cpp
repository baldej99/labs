#include "MyMath.h"
int MyMath::callCount = 0;
int MyMath::add(int a, int b) {
    callCount++;
    return a + b;
}
int MyMath::sub(int a, int b) {
    callCount++;
    return a - b;
}
int MyMath::mult(int a, int b) {
    callCount++;
    return a * b;
}
double MyMath::div(double a, double b) {
    callCount++;
    if (b != 0) return a / b;
    return 0; 
}

