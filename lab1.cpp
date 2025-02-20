#include <iostream>
using namespace std;

/*1.1
void selsort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minI = i;
        for (int k = i + 1; k < n; k++) {
            if (arr[k] < arr[minI]) {
                minI = k;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minI];
        arr[minI] = temp;
    }
}

int main()
{
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        while (arr[i] < 2 || arr[i] > 103) {
            cout << "wrong input" << '/n';
            cin >> arr[i];
        }
    }
    selsort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    delete[] arr;
    return 0;
}
*/
/*1.2
void selsort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minI = i;
        for (int k = i + 1; k < n; k++) {
            if (arr[k] > arr[minI]) {
                minI = k;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minI];
        arr[minI] = temp;
    }
}

int main()
{
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        while (arr[i] > 100) {
            cout << "wrong input" << '/n';
            cin >> arr[i];
        }
    }
    selsort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    delete[] arr;
    return 0;
}
*/
#include <iostream>
#include <string>

using namespace std;

void selectionSort(string arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    int n;
    cin >> n;
    cin.ignore(); 

    string* phones = new string[n]; 

    for (int i = 0; i < n; i++) {
        getline(cin, phones[i]); 
    }

    selectionSort(phones, n); 

    for (int i = 0; i < n; i++) {
        cout << phones[i] << endl;
    }

    delete[] phones; 

    return 0;
}



