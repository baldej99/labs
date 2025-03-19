#include <iostream>
#include <time.h>
using namespace std;
/*void quickSort(int a[], int left, int right) {
    if (left >= right) return;
    int p = a[(left + right) / 2];
    int i = left;
    int j = right;
    while (i <= j) {
        while (a[i] < p) i++;
        while (a[j] > p) j--;
        if (i <= j) {
            int tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
            i++;
            j--;
        }
    }
    if (left < j) quickSort(a, left, j);
    if (i < right) quickSort(a, i, right);

}

int main()
{
    srand(time(0));
    int arr[1000];
    for (int i = 0; i < 1000; i++) {
        arr[i] = rand() % 101;
        cout << arr[i] << " ";
    }

    quickSort(arr, 0, 999);
    cout << endl << "sorted array: ";
    for (int i = 0; i < 1000; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}*/

/*void quickSort(int* a, int left, int right) {
    if (left >= right) return;
    int p = a[(left + right) / 2];
    int i = left;
    int j = right;
    while (i <= j) {
        while (a[i] < p) i++;
        while (a[j] > p) j--;
        if (i <= j) {
            int tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
            i++;
            j--;
        }
    }
    if (left < j) quickSort(a, left, j);
    if (i < right) quickSort(a, i, right);

}

int main()
{
    srand(time(0));
    int size;
    cin >> size;
    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        arr[i] = 50 + rand() % 51;
        cout << arr[i] << " ";
    }

    quickSort(arr, 0, size - 1);
    cout << endl << "sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;

}*/
/*
void quickSort(int** a, int left, int right) {
    if (left >= right) return;
    int p = a[(left + right) / 2][0];
    int i = left;
    int j = right;
    while (i <= j) {
        while (a[i][0] < p) i++;
        while (a[j][0] > p) j--;
        if (i <= j) {
            int tmp = a[i][0];
            a[i][0] = a[j][0];
            a[j][0] = tmp;
            i++;
            j--;
        }
    }
    if (left < j) quickSort(a, left, j);
    if (i < right) quickSort(a, i, right);

}

int main()
{
    srand(time(0));
    int rows;
    int cols;
    cin >> rows >> cols;
    int** arr = new int*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }
    for (int i = 0; i < rows; i++) {
        cout << endl;
        for (int j = 0; j < cols; j++) {
            arr[i][j] = 5 + rand() % 57;
            cout << arr[i][j] << " ";
        }
    }

    quickSort(arr, 0, rows - 1);
    cout << endl << "sorted array: ";
    for (int i = 0; i < rows; i++) {
        cout << endl;
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
    }
    cout << endl;
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

}
*/
/*
#include <vector>
#include <cstdlib>
#include <string>

using namespace std;

int compare(const void* a, const void* b) {
    return strcmp((*(const string*)a).c_str(), (*(const string*)b).c_str());
}

int main() {
    int n;
    cout << "number of students: ";
    cin >> n;
    cin.ignore(); 
    vector<string> students(n); 
    cout << "enter the names:" << endl;
    for (int i = 0; i < n; i++) {
        getline(cin, students[i]);
    }
    qsort(&students[0], students.size(), sizeof(string), compare);
    cout << "\nthe sorted list is:" << endl;
    for (int i = 0; i < students.size(); i++) {
        cout << students[i] << endl;
    }


    return 0;
}
*/


