#include <iostream>

using namespace std;

struct Matrix
{
	int **frame;

	int width;
	int height;
};

void removeRow(Matrix &matrix, int index);
void removeColumn(Matrix &matrix, int index);

int main()
{

	cout << "Task 14" << endl;

	Matrix matrix;

	cout << "Enter N: ";
	cin >> matrix.height;

	cout << "Enter K: ";
	cin >> matrix.width;

	cout << "Enter matrix: \n";

	matrix.frame = new int*[matrix.height];

	for (int i = 0; i < matrix.height; i++)
	{
		matrix.frame[i] = new int[matrix.width];

		for (int j = 0; j < matrix.width; j++)
		{
			cin >> matrix.frame[i][j];
		}
	}

	int rowIndex, columnIndex;

	cout << "Enter row: ";
	cin >> rowIndex;

	cout << "Enter column: ";
	cin >> columnIndex;

	removeRow(matrix, rowIndex);
	removeColumn(matrix, columnIndex);

	cout << "Matrix: \n";

	for (int i = 0; i < matrix.height; i++)
	{
		for (int j = 0; j < matrix.width; j++)
		{
			cout << matrix.frame[i][j] << " ";
		}
		cout << endl;
	}

	system("pause");

	return 0;
}

void removeRow(Matrix &matrix, int index)
{
	for (int i = index; i < matrix.height - 1; i++)
	{
		for (int j = 0; j < matrix.width; j++)
		{
			matrix.frame[i][j] = matrix.frame[i + 1][j];
		}
	}
	matrix.height--;
}

void removeColumn(Matrix &matrix, int index)
{
	for (int i = 0; i < matrix.height; i++)
	{
		for (int j = index; j < matrix.width - 1; j++)
		{
			matrix.frame[i][j] = matrix.frame[i][j + 1];
		}
	}
	matrix.width--;
}