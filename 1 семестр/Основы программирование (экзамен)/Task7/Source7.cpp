#include <iostream>

using namespace std;

int main()
{
	int K;

	cout << "Task 7" << endl;

	cout << "Enter K: ";
	cin >> K;

	cout << "Enter matrix: \n";

	int **matrixA = new int*[K];

	for (int i = 0; i < K; i++)
	{
		matrixA[i] = new int[K];

		for (int j = 0; j < K; j++)
		{
			cin >> matrixA[i][j];
		}
	}

	int sum = 0;

	for (int i = 0; i < K; i++)
	{
		for (int j = 0; j < K; j++)
		{
			if ((i == j) || (i == (K - 1 - j)))
			{
				sum += matrixA[i][j];
			}
		}
	}

	cout << "Sum: " << sum << endl;

	system("pause");

	return 0;
}