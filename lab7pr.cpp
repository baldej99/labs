#include <iostream>

using namespace std;

/*
struct Lecture {
    int start;
    int end;
};

void sortByEnd(Lecture arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j].end < arr[minIndex].end) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            Lecture temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int maxLectures(Lecture arr[], int n) {
    sortByEnd(arr, n); 

    int count = 0;
    int current_end = 0;

    for (int i = 0; i < n; ++i) {
        if (arr[i].start >= current_end) {
            count++;
            current_end = arr[i].end;
        }
    }

    return count;
}

int main() {
    int N;
    cin >> N;

    Lecture lectures[1000]; 

    for (int i = 0; i < N; ++i) {
        cin >> lectures[i].start >> lectures[i].end;
    }

    int result = maxLectures(lectures, N);
    cout << result << endl;

    return 0;
}
*/

const int MAX_N = 100000;
const int INF = 1e9;

struct Box {
    int weight;
    int capacity;
};

void selectionSort(Box arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        int minValue = arr[i].weight + arr[i].capacity;
        for (int j = i + 1; j < n; ++j) {
            int sum = arr[j].weight + arr[j].capacity;
            if (sum < minValue) {
                minValue = sum;
                minIndex = j;
            }
        }
        if (minIndex != i) {
            Box temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main() {
    int n;
    cin >> n;

    Box* boxes = new Box[MAX_N];
    for (int i = 0; i < n; ++i) {
        cin >> boxes[i].weight >> boxes[i].capacity;
    }
    selectionSort(boxes, n);

    int* dp = new int[MAX_N + 1];
    for (int i = 0; i <= n; ++i) dp[i] = INF;
    dp[0] = 0;

    int result = 0;

    for (int i = 0; i < n; ++i) {
        for (int m = result; m >= 0; --m) {
            if (dp[m] <= boxes[i].capacity) {
                int newWeight = dp[m] + boxes[i].weight;
                if (newWeight < dp[m + 1]) {
                    dp[m + 1] = newWeight;
                    if (m + 1 > result) {
                        result = m + 1;
                    }
                }
            }
        }
    }

    cout << result << endl;
    delete[] boxes;
    delete[] dp;
    return 0;
}

