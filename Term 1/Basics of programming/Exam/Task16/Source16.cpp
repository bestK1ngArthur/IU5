#include <iostream>

using namespace std;

int main()
{
	int Q;

	cout << "Task 16" << endl;

	cout << "Enter Q: ";
	cin >> Q;

	float **matrix = new float*[Q];
	for (int i = 0; i < Q; i++)
	{
		matrix[i] = new float[Q];
	}

	int nowJ;

	for (int i = 0; i < Q; i++)
	{	
		nowJ = 0;
		for (int j = i; j < Q; j++)
		{
			matrix[i][j] = (float)(nowJ + 1);
			matrix[j][i] = matrix[i][j];
			nowJ++;
		}
	}

	cout << "Matrix: \n";

	for (int i = 0; i < Q; i++)
	{
		for (int j = 0; j < Q; j++)
		{
			cout << matrix[i][j] << " ";
		}

		cout << endl;
	}

	system("pause");

	return 0;
}