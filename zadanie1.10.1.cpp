#include <iostream>
#include <clocale>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int size = 0;
        
    cout << "Введите размер массива: ";
    cin >> size;
    int* mas = new int[size]();
    for (int i = 0; i < size; i++) {
        cout << "MAS[" << i << "] = ";
        cin >> mas[i];
    }
    cout << "Введённый массив: ";

    for (int i = 0; i < size; i++) {
        cout << mas[i] << " ";
    }
    delete mas;
    return EXIT_SUCCESS;
}