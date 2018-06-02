#include <iostream>

using namespace std;

int main()
{
	int K;

	cout << "Task 17" << endl;

	cout << "Enter K: ";
	cin >> K;

	float **matrix = new float*[K];

	for (int i = 0; i < K; i++)
	{
		matrix[i] = new float[K];
		
		for (int j = 0; j < K; j++)
		{
			if (j > (K - 1 - i))
			{
				matrix[i][j] = 0;
			}
			else
			{
				matrix[i][j] = (float)i+1;
			}
		}
	}

	cout << "Matrix: \n";

	for (int i = 0; i < K; i++)
	{
		for (int j = 0; j < K; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	system("pause");

	return 0;
}