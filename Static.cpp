#include <iostream>
#include "Static.h"
using namespace std;
namespace MySpace {
    void func1(int num) {
        static int staticVar = 0;
        cout << staticVar + num;
        staticVar = num;
    }
}