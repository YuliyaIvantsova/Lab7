#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    int mass[3][3]; 
    int max = mass[0][0];

    cout << "Двумерный массив: " << endl;

    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++)
        {
            mass[i][j] = rand() % 100;
            cout << mass[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++)
        {
            if (max < mass[i][j])
            {
                max = mass[i][j];
            }
        }
    }
    cout << "Максимальный элемент: " << max << endl;
    return 0;
}