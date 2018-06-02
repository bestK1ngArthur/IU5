#include <iostream>

using namespace std;

int main()
{
	int K;

	cout << "Task 3" << endl;

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

	for (int i = 0; i < K; i++)
	{
		for (int j = 0; j < K; j++)
		{
			if ((i > j) && (matrixA[i][j] > 0))
			{
				matrixA[i][j] = 1;
			}
		}
	}

	cout << "Matrix A: \n";

	for (int i = 0; i < K; i++)
	{
		for (int j = 0; j < K; j++)
		{
			cout << matrixA[i][j] << " ";
		}

		cout << endl;
	}

	system("pause");

	return 0;
}