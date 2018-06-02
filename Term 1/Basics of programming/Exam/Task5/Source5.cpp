#include <iostream>

using namespace std;

int main()
{
	int N;

	cout << "Task 5" << endl;

	cout << "Enter N: ";
	cin >> N;

	cout << "Enter matrix: \n";

	int **matrixA = new int*[N];

	for (int i = 0; i < N; i++)
	{
		matrixA[i] = new int[N];

		for (int j = 0; j < N; j++)
		{
			cin >> matrixA[i][j];
		}
	}

	int max = matrixA[0][N-2];

	for (int i = 0; i < N; i++)
	{

		for (int j = 0; j < N; j++)
		{
			if ((i > j) && (i >(N - 1 - j)) || ((i < j) && (i < (N - 1 - j))))
			{
				if (matrixA[i][j] > max)
				{
					max = matrixA[i][j];
				}
			}
		}
	}

	cout << "Max: " << max << endl;

	system("pause");

	return 0;
}