#include <iostream>
using namespace std;
class BirthYearException : public exception {
public:
    enum ErrorCode { TOO_OLD, TOO_YOUNG, NEGATIVE_YEAR };
    BirthYearException(ErrorCode code) : code(code) {}

    const char* what() const throw() override {
        switch (code) {
        case TOO_OLD:
            return "Что-то не верится...";
        case TOO_YOUNG:
            return "Вы ещё не родились";
        case NEGATIVE_YEAR:
            return "Вы ввели отрицательное число!";
        default:
            return "Неизвестная ошибка";
        }
    }

private:
    ErrorCode code;
};
void displayNumberText() {
    int number;
    cout << "Введите число (1, 2 или 3): ";
    cin >> number;

    switch (number) {
    case 1:
        cout << "Один" << endl;
        break;
    case 2:
        cout << "Два" << endl;
        break;
    case 3:
        cout << "Три" << endl;
        break;
    default:
        throw range_error("Некорректное значение");
    }
}
void checkBirthYear() {
    int birthYear;
    cout << "Введите год своего рождения: ";
    cin >> birthYear;

    if (birthYear < 1850)
        throw BirthYearException(BirthYearException::TOO_OLD);
    else if (birthYear > 2024)  
        throw BirthYearException(BirthYearException::TOO_YOUNG);
    else if (birthYear < 0)
        throw BirthYearException(BirthYearException::NEGATIVE_YEAR);

    cout << "Спасибо!" << endl;
}

int main() {
    setlocale(LC_ALL, "RU");
    try {
        displayNumberText();
    }
    catch (const range_error& e) {
        cout << e.what() << endl;
    }

    try {
        checkBirthYear();
    }
    catch (const BirthYearException& e) {
        cout << e.what() << endl;
    }

    return 0;
}


