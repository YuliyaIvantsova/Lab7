#include <iostream>
using namespace std;

int main()
{
    setlocale(NULL, "rus");
    int mass[5][5];
    int n;
    int k = 1;

    cout << "Двумерный массив:" << endl;

    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            mass[i][j] = rand() % 10;
        }
    }

    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            cout << mass[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Введите любое число от 0 до 9:" << endl;
    cin >> n;

    cout << "Номера элементов больше введённого числа:" << endl;
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            if (mass[i][j] > n)
            {
                cout << k << "й элемент: " << "строка " << i << ", столбец " << j << "\n";
                k++;
            }
        }
    }
    return 0;
}