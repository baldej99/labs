#include <iostream>
#include <fstream>
#include <unordered_set>
#include <set>
using namespace std;

int main() {
    ifstream input("input.txt");
    ofstream output("output.txt");

    unordered_set<int> numbers;
    int num;   
    while (input >> num) {
        if (num > 0) {
            numbers.insert(num);
        } else if (num < 0) {
            numbers.erase(-num);
        } else { // num == 0
            set<int> sortedNumbers(numbers.begin(), numbers.end());
            for (int value : sortedNumbers) {
                output << value << " ";
            }
            output << endl;
            break;
        }
    }
    
    input.close();
    output.close();
    return 0;
}
