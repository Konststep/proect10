#include <iostream>
#include <clocale>
#include <string>
#include <Windows.h>

using namespace std;

double* create_array(int size) {
    double* mas = new double[size]();
            
    return mas;
}
void print_array(double mas[], int size) {
    cout << "Массив: ";

    for (int i = 0; i < size; i++) {
        cout << mas[i] << " ";
    }
    delete[] mas;
 }

int main() {
    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int size = 0;

    double* mas = create_array(100);
    cout << "Введите размер массива: ";
    cin >> size;
    print_array(mas, size);
    return EXIT_SUCCESS;
}