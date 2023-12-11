#include <iostream>
#include <locale>
#include <string>

using namespace std;

/*
* Лабораторная работа 8. Задание 1. Индивидуальный вариант 24.
* Дана строка, изображающая целое положительное число. Вывести максимальную и минимальную цифры этого числа. 
* return 0 - все ок. return 1 - ошибка.
*/

int main() {
    setlocale(LC_ALL, "rus");

    char number[50];
    cout << "Введите число: ";
    cin >> number;

    int len = strlen(number);

    for (int i = 0; i < len; i++) {
        if (number[i] == '-' || number[i] == '.') {
            cerr << "Введите целое положительное число!";
            return 1;
            break;
        }
    }

    char min = number[0];
    char max = number[0];

    for (int i = 0; i < len; i++) {
        if (max < number[i]) {
            max = number[i];
        }
        if (min > number[i]) {
            min = number[i];
        }
    }

    cout << "Минимальная цифра числа: " << min << endl;
    cout << "Максимальная цифра числа: " << max;
}
