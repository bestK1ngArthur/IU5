#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int N, X;

	cout << "Task 11" << endl;

	cout << "Enter N: ";
	cin >> N;

	cout << "Enter X: ";
	cin >> X;

	cout << "Enter matrix: \n";

	float **matrixA = new float*[N+1];

	for (int i = 0; i < (N+1); i++)
	{
		matrixA[i] = new float[N+1];

		for (int j = 0; j < (N+1); j++)
		{

			if ((i > 0) && (i < N) && (j > 0) && (j < N))
			{
				matrixA[i][j] = 0;
			}
			else 
			{
				matrixA[i][j] = (float)pow(X, abs((float)i - (float)j));
			}
		}
	}

	cout << "Matrix A: \n";

	for (int i = 0; i < (N+1); i++)
	{
		for (int j = 0; j < (N+1); j++)
		{
			cout << matrixA[i][j] << " ";
		}

		cout << endl;
	}

	system("pause");

	return 0;
}