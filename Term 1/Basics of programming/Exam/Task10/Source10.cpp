#include <iostream>

using namespace std;

int main()
{
	int L;

	cout << "Task 10" << endl;

	cout << "Enter L: ";
	cin >> L;

	cout << "Enter matrix: \n";

	int **matrixZ = new int*[L];

	for (int i = 0; i < L; i++)
	{
		matrixZ[i] = new int[L];

		for (int j = 0; j < L; j++)
		{
			cin >> matrixZ[i][j];
		}
	}

	int sum = 0;

	for (int i = 0; i < L; i++)
	{
		for (int j = 0; j < L; j++)
		{
			if (i > j)
			{
				sum += matrixZ[i][j];
			}
		}
	}

	cout << "Sum: " << sum << endl;

	system("pause");

	return 0;
}