#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    int mass[3][3], nechetn = 0; 
    cout << "Двумерный массив: " << endl;

    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++)
        {
            mass[i][j] = (int)rand() % 10; 
            cout << mass[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++)
        {
            if (mass[i][j] % 2 != 0)
            {
                nechetn++;
            }
        }
    }

    cout << "Количество нечетных чисел в массиве: " << nechetn << endl;
    return 0;
}