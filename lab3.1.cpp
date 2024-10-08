#include <iostream>
using namespace std;
int main()
{
	int a = 5;
	int* p;
	p = &a;
	cout << p << endl;
	cout << *p << endl;
	*p = 6;
	cout << a << endl;
	int arr[5] = { 1, 2 , 3, 4 , 5 };
	for (int i = 0; i < 5; i++) {
		cout << *(arr + i) << " ";
	}
	cout << endl;
	int d = 5;
	int* const ptr = &d;
	//ptr = &a;
	*ptr = 10;
	cout << d;

}