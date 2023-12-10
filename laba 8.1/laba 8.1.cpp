#include <iostream>
#include <locale>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");

    char number[50];
    cout << "Введите число: ";
    cin >> number;

    int len = strlen(number);
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

