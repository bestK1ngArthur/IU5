#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int M, N;

	cout << "Task 1" << endl;

	cout << "Enter M: ";
	cin >> M;

	cout << "Enter N: ";
	cin >> N;

	vector<int> vectorX(N);

	cout << "Enter matrix: \n";

	int **matrixY = new int*[N];

	for (int i = 0; i < N; i++)
	{
		matrixY[i] = new int[M];

		for (int j = 0; j < M; j++)
		{
			cin >> matrixY[i][j];
		}
	}

	for (int i = 0; i < N; i++)
	{
		int max = matrixY[i][0];

		for (int j = 1; j < M; j++)
		{
			if (matrixY[i][j] > max)
			{
				max = matrixY[i][j];
			}
		}

		vectorX[i] = max;
	}

	cout << "Vector X: ";

	for (int i = 0; i < N; i++)
	{
		cout << "[" << vectorX[i] << "], ";
	}

	cout << endl;

	system("pause");

	return 0;
}