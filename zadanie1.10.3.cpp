#include <iostream>
#include <clocale>
#include <string>
#include <Windows.h>
#include <iomanip>

using namespace std;

int** create_two_dim_array(int rows, int cols) {

    int** mas = new int* [rows]();
    for (int i = 0; i < rows; i++) {
        mas[i] = new int[cols]();
    }
    return mas;
}

void fill_two_dim_array(int* mas[], int rows, int cols) {
    int str = 1, stolb = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            mas[i][j] = str * stolb;
            stolb++;
        }
        stolb = 1;
        str++;
    }

}

void print_two_dim_array(int* mas[], int rows, int cols) {
    int width = 4;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {

            cout << setw(width) << right << mas[i][j];
        }
        cout << endl;
    }
}

void delete_two_dim_array(int* mas[], int r)
{
    for (int i = 0; i < r; i++)
    {
        delete[] mas[i];
    }
    delete[] mas;
}

int main() {
    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int rows, cols;
    cout << "Введите количество строк: ";
    cin >> rows;
    cout << "Введите количество столбцов: ";
    cin >> cols;

    int** mas = create_two_dim_array(rows, cols);
    fill_two_dim_array(mas, rows, cols);
    cout << "Таблица умножения:" << endl;;
    print_two_dim_array(mas, rows, cols);
    delete_two_dim_array(mas, cols);
    
    return EXIT_SUCCESS;
}