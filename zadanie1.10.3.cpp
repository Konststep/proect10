#include <iostream>
#include <clocale>
#include <string>
#include <Windows.h>

using namespace std;

int** create_two_dim_array(int rows, int cols) {
    cout << "Введите количество строк: ";
    cin >> rows;
    int* y_rows = &rows;
    cout << "Введите количество столбцов: ";
    cin >> cols;
    int* y_cols = &cols;
    int** mas = new int* [*y_rows]();
    for (int i = 0; i < *y_rows; i++) {
        mas[i] = new int[*y_cols]();
    }
}

void fill_two_dim_array(int* mas[], int* y_rows, int* y_cols) {
    int str = 1, stolb = 1;
    for (int i = 0; i < *y_rows; i++) {
        for (int j = 0; j < *y_cols; j++) {
            mas[i][j] = str * stolb;
            stolb++;
        }
        str++;
    }
}

void print_two_dim_array(int* mas[], int* y_rows, int* y_cols) {
    for (int i = 0; i < *y_rows; i++) {
        for (int j = 0; j < *y_cols; j++) {
            cout << mas[i][j] << " ";
        }
        cout << endl;
    }
}

void delete_two_dim_array(int* mas[], int* y_rows)
{
    for (int i = 0; i < *y_rows; i++)
    {
        delete[] mas[i];
    }
    delete[] mas;
}

int main() {
    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //int rows, cols;

    create_two_dim_array();
    fill_two_dim_array();
    print_two_dim_array();
    delete_two_dim_array();

    return EXIT_SUCCESS;
}
