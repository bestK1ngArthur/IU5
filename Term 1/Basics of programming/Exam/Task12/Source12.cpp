#include <iostream>

using namespace std;

int main()
{
	int K;

	cout << "Task 12" << endl;

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

	int min = matrixA[K-2][0];

	for (int i = 0; i < K; i++)
	{

		for (int j = 0; j < K; j++)
		{
			if ((i < j) && (j > (K - 1 - i)) || ((i > j) && (j < (K - 1 - i))))
			{
				if (matrixA[i][j] < min)
				{
					min = matrixA[i][j];
				}
			}
		}
	}

	cout << "Min: " << min << endl;

	system("pause");

	return 0;
}