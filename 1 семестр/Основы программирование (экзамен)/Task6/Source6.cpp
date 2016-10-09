#include <iostream>

using namespace std;

int main()
{
	int L;

	cout << "Task 6" << endl;

	cout << "Enter L: ";
	cin >> L;

	cout << "Enter matrix: \n";

	int **matrixA = new int*[L];

	for (int i = 0; i < L; i++)
	{
		matrixA[i] = new int[L];

		for (int j = 0; j < L; j++)
		{
			cin >> matrixA[i][j];
		}
	}

	for (int i = 0; i < L; i++)
	{
		for (int j = 0; j < L; j++)
		{
			if (i < j)
			{
				matrixA[i][j] = 0;
			}
		}
	}

	cout << "Matrix A: \n";

	for (int i = 0; i < L; i++)
	{
		for (int j = 0; j < L; j++)
		{
			cout << matrixA[i][j] << " ";
		}

		cout << endl;
	}

	system("pause");

	return 0;
}