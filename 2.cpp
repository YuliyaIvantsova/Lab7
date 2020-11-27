#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int mass[3][3], chetn = 0, kol = 0, sredn; 

	cout << "Двумерный массив: " << endl;

	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++)
		{
			mass[i][j] = rand() % 10; 
			cout << mass[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++)
		{
			if (mass[i][j] % 2 == 0)
			{
				chetn += mass[i][j]; 
				kol++; 
			}
		}
	}

	sredn = chetn / kol; 
	cout << "Среднее арифметическое чётных чисел массива: " << sredn << endl;
	return 0;
}