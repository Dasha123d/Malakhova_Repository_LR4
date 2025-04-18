#include <iostream>
#include <string>
using namespace std;

// Функция для ввода натурального числа
void inputNaturalNumber(unsigned long long& number) {
    cout << "Введите натуральное число X: ";
    cin >> number;
}

// Функция для ввода цифры
void inputDigit(int &digit) {
    cout << "Введите цифру A (от 0 до 9): ";
    cin >> digit;
}
// Функция для проверки, есть ли цифра A в числе X
bool checkDigitPresence(const string& strX, char A) {
    return strX.find(A) == string::npos;
}

// Функция для подсчета вхождений цифры A в числе X
int countDigitOccurrences(const string& strX, char A) {
    int count = 0;
    for (char digit : strX) {
        if (digit == A) {
            count++;
        }
    }
    return count;
    noA = (strX.find(A) == string::npos)
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

            bool noA = checkDigitPresence(strX, charA);
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


