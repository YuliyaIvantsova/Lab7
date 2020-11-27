#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    int mass[3][3], proizv = 1;

    cout << "Двумерный массив: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mass[i][j] = rand() % 81 - 20;
            cout << mass[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            proizv *= mass[i][j];
        }
    }
    if (proizv < 1000 && proizv>-1000) 
    {
        cout << "Произведение чисел массива: " << proizv << "\nПроизведение чисел массива не является трехзначным" << endl;
    }
    else
        cout << "Произведение чисел массива: " << proizv << "\nПроизведение чисел массива является трехзначным" << endl;
    return 0;
}