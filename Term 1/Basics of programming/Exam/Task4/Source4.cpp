#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
	int K;

	cout << "Task 4" << endl;

	cout << "Enter K: ";
	cin >> K;

	vector<int> vectorX(K);

	cout << "Enter vector: ";

	for (int i = 0; i < K; i++)
	{
		cin >> vectorX[i];
	}

	int **matrixY = new int*[K];

	for (int i = 0; i < K; i++)
	{
		matrixY[i] = new int[K];

		for (int j = 0; j < K; j++)
		{
			matrixY[i][j] = (int)pow(vectorX[j], i);
		}
	}

	cout << "Matrix Y: \n";

	for (int i = 0; i < K; i++)
	{
		for (int j = 0; j < K; j++)
		{
			cout << matrixY[i][j] << " ";
		}

		cout << endl;
	}

	system("pause");

	return 0;
}