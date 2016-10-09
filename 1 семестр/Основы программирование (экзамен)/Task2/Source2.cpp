#include <iostream>

using namespace std;

int main()
{
	int M, N;

	cout << "Task 2" << endl;

	cout << "Enter M: ";
	cin >> M;

	cout << "Enter N: ";
	cin >> N;

	int *arrayL = new int[M];

	cout << "Enter matrix: \n";

	int **matrixZ = new int*[N];

	for (int i = 0; i < N; i++)
	{
		matrixZ[i] = new int[M];

		for (int j = 0; j < M; j++)
		{
			cin >> matrixZ[i][j];
		}
	}

	for (int i = 0; i < M; i++)
	{
		int zeroCounter = 0;

		for (int j = 0; j < N; j++)
		{
			if (matrixZ[j][i] == 0)
			{
				zeroCounter++;
			}
		}

		arrayL[i] = zeroCounter;
	}

	cout << "Array L: ";

	for (int i = 0; i < M; i++)
	{
		cout << "[" << arrayL[i] << "], ";
	}

	cout << endl;

	system("pause");

	return 0;
}