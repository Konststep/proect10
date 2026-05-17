#include <iostream>
#include <clocale>
#include <string>
#include <Windows.h>

using namespace std;

double create_array(int size) {
    double* mas = new double[size]();
    cout << "Массив: ";

    for (int i = 0; i < size; i++) {
        cout << mas[i] << " ";
    }
    delete[] mas;
    return 0;
}

int main() {
    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int size = 0;

    cout << "Введите размер массива: ";
    cin >> size;
    create_array(size);

    return EXIT_SUCCESS;
}