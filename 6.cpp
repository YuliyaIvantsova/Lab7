#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    int mass[5][5], x, n = 0; 
    cout << "Двумерный массив: " << endl;
    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 5; j++)
        {
            mass[i][j] = (int)rand() % 10; 
            cout << mass[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Введите любое число: " << endl;
    cin >> x;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (mass[i][j] < x)
            {
                mass[i][j] = x;
            }

            else
                n++;
        }
    }

    if (n < 5 * 5)
    {
        cout << "Измененный двумерный массив: " << endl;
        for (int i = 0; i < 5; i++) 
        {
            for (int j = 0; j < 5; j++)
            {
                cout << mass[i][j] << " ";
            }
            cout << endl;
        }
    }
    else 
    {
        cout << "Все числа в массиве больше введённого" << endl;
    }
    return 0;
}