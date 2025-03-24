#include <iostream>
#include <string>
using namespace std;

// Функция для ввода натурального числа
void inputNaturalNumber(unsigned long long &number) {
    cout << "Введите натуральное число X: ";
    cin >> number;
}

// Функция для ввода цифры
void inputDigit(int &digit) {
}

// Функция для проверки, есть ли цифра A в числе X
void checkDigitPresence(const string& strX, char A, bool &noA, int &countA) {
}

// Функция для подсчета вхождений цифры A в числе X
int countDigitOccurrences(const string& strX, char A) {
}

int main() {
    unsigned long long x;
    int a;
    int choice;
    do {
        cout << "Меню:" << endl;
        cout << "1. Ввести число и цифру для проверки" << endl;
        cout << "2. Выход" << endl;
        cout << "Выберите опцию: ";
        cin >> choice;

        switch (choice) {
            case 1:
                inputNaturalNumber(x);
                inputDigit(a);
                
                // Преобразуем число X в строку для проверки
                string strX = to_string(x);
                char charA = '0' + a; // Преобразуем цифру в символ

                bool noA;
                checkDigitPresence(strX, charA, noA);
                
                int countA = countDigitOccurrences(strX, charA);
                cout << "В числе X нет цифры A: " << (noA ? "Да" : "Нет") << endl;
                cout << "В числе X цифра A встречается " << countA << " раз(а)." << endl;
                break;

            case 2:
                cout << "Выход из программы." << endl;
                break;

            default:
                cout << "Неверный выбор. Пожалуйста, попробуйте снова." << endl;
        }
    } while (choice != 2);

    return 0;
}
