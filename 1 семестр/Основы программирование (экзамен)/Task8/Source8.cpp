#include <iostream>

using namespace std;

int main()
{
	int W;

	cout << "Task 8" << endl;

	cout << "Enter W: ";
	cin >> W;

	cout << "Enter matrix: \n";

	int **matrixZ = new int*[W];

	for (int i = 0; i < W; i++)
	{
		matrixZ[i] = new int[W];

		for (int j = 0; j < W; j++)
		{
			cin >> matrixZ[i][j];
		}
	}

	for (int i = 0; i < W; i++)
	{
		for (int j = 0; j < W; j++)
		{
			if (i < j)
			{
				int buffer = matrixZ[i][j];
				matrixZ[i][j] = matrixZ[j][i];
				matrixZ[j][i] = buffer;
			}
		}
	}

	cout << "Matrix Z: \n";

	for (int i = 0; i < W; i++)
	{
		for (int j = 0; j < W; j++)
		{
			cout << matrixZ[i][j] << " ";
		}

		cout << endl;
	}

	system("pause");

	return 0;
}