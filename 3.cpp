#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	double mass[3][3], sum = 0; 

	cout << "Двумерный массив: " << endl;

	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++)
		{
			mass[i][j] = (double)(rand() % 10001) / 100; 
			cout << mass[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < 3; i++) 
	{
		sum += mass[i][i];
	}

	cout << "Сумма чисел по главной диагонали матрицы: " << sum << endl;
	return 0;
}