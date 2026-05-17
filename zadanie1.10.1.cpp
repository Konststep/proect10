#include <iostream>
#include <clocale>
#include <string>
#include <Windows.h>

using namespace std;

int massiv(int mas[], int size) {
    cout << "Введённый массив: ";

    for (int i = 0; i < size; i++) {
        cout << mas[i] << " ";
    }
    return 0;
}

int main() {
    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int size = 0;
    int* mas = new int[size]();
    cout << "Введите размер массива: ";
    cin >> size;
    for (int i = 0; i < size; i++) {
        cout << "MAS[" << i << "] = ";
        cin >> mas[i];
    }

    massiv(mas, size);
    //delete[] mas;  Почему то как только я (ракомментирую) очищаю массив у меня не доходит до return EXIT_SUCCESS а выдается ошибка,без очищения все хорошо
    return EXIT_SUCCESS;
}