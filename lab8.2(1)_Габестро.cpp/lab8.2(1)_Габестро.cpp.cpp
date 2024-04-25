// lab8.2(1)_Габестро.cpp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


using namespace std;

int main() {
    setlocale(LC_CTYPE, "ukr");

    int n;
    cout << "Введіть кількість елементів масиву: ";
    cin >> n;

    double* arr = new double[n];
    cout << "Введіть елементи масиву: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    double product_even = 1.0;
    for (int i = 1; i < n; i += 2) {
        product_even *= arr[i];
    }
    cout << "Добуток елементів масиву з парними номерами: " << product_even << endl;

    int first_zero_index = -1, last_zero_index = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            if (first_zero_index == -1) {
                first_zero_index = i;
            }
            else {
                last_zero_index = i;
            }
        }
    }

    double sum_between_zeros = 0.0;
    if (first_zero_index != -1 && last_zero_index != -1 && last_zero_index > first_zero_index) {
        for (int i = first_zero_index + 1; i < last_zero_index; i++) {
            sum_between_zeros += arr[i];
        }
        cout << "Сума елементів масиву між першим і останнім нульовими елементами: " << sum_between_zeros << endl;
    }
    else {
        cout << "У масиві немає нульових елементів або всі нульові елементи розташовані поспіль" << endl;
    }

    return 0;
}