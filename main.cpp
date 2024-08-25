#include <iostream>

using namespace std;

int main() {
    int rows;

    cout << "Введите количество строк: ";
    cin >> rows;

    // Верхняя часть треугольника
    for (int i = 1; i <= rows; i++) {
        // Вывод пробелов
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        // Вывод звезд (левая часть)
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Вывод звезд (правая часть)
        for (int j = 1; j <= i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
