#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
class Settings {
public:
    static map<string, string> settingsMap;
    static void Add(const string& key, const string& value) {
        settingsMap[key] = value;
    }
    static string Get(const string& key) {
        if (settingsMap.find(key) != settingsMap.end()) {
            return settingsMap[key];
        }
        return "Key not found";
    }
    static void Print() {
        for (const auto& pair : settingsMap) {
            cout << pair.first << ": " << pair.second << endl;
        }
    }
};
map<string, string> Settings::settingsMap;
void printVector(vector<float> vec) {
    for (float value : vec) {
        cout << value << " ";
    }
    cout << endl;
}

int main()
{
    setlocale(LC_ALL, "RU");
    vector<float>v1;
    v1.push_back(1.1);
    v1.push_back(1.2);
    v1.push_back(1.3);
    v1.push_back(1.4);
    v1.push_back(1.5);
    
    printVector(v1);
    v1.insert(v1.begin() + 3, 3.7);
    printVector(v1);
    v1.pop_back();
    printVector(v1);
    Settings::Add("username", "admin");
    Settings::Add("password", "12345");

    cout << "Значение по ключу 'username': " << Settings::Get("username") << endl;
    cout << "Значение по ключу 'password': " << Settings::Get("password") << endl;

    cout << "Содержимое Map:" << endl;
    Settings::Print();
}

