#include <iostream>

using namespace std;

struct Matrix
{
	double **frame;

	int width;
	int height;

	char *name;
};

void printMatrix(Matrix matrix);
void enterMatrix(Matrix &matrix);
void multiplication(Matrix first, Matrix second, Matrix &result);

int main()
{
	cout << "Task 15" << endl;

	Matrix matrixA;
	matrixA.name = "A";
	enterMatrix(matrixA);

	Matrix matrixB;
	matrixB.name = "B";
	matrixB.height = matrixA.height;
	matrixB.width = matrixA.width;
	matrixB.frame = new double*[matrixB.height];
	for (int i = 0; i < matrixB.height; i++)
	{
		matrixB.frame[i] = new double[matrixB.width];
		for (int j = 0; j < matrixB.width; j++)
		{
			if (i > j)
			{
				matrixB.frame[i][j] =  1 / (matrixA.frame[i][j] + matrixA.frame[j][i] - 1);
			}
			else if (i == j)
			{
				matrixB.frame[i][j] = 0;
			}
			else
			{
				matrixB.frame[i][j] = -1 / (matrixA.frame[i][j] + matrixA.frame[j][i] - 1);
			}
		}
	}
	printMatrix(matrixB);

	Matrix matrixC;
	matrixC.name = "C";
	
	multiplication(matrixA, matrixB, matrixC);

	printMatrix(matrixC);

	system("pause");

	return 0;
}

void printMatrix(Matrix matrix)
{
	cout << "Matrix " << matrix.name << endl;

	for (int i = 0; i < matrix.height; i++)
	{
		for (int j = 0; j < matrix.width; j++)
		{
			cout << matrix.frame[i][j] << " ";
		}
		cout << endl;
	}
}

void enterMatrix(Matrix &matrix)
{
	cout << "Entering matrix " << matrix.name << endl;

	cout << "Enter height: ";
	cin >> matrix.height;

	cout << "Enter width: ";
	cin >> matrix.width;

	cout << "Enter matrix: \n";

	matrix.frame = new double*[matrix.height];

	for (int i = 0; i < matrix.height; i++)
	{
		matrix.frame[i] = new double[matrix.width];

		for (int j = 0; j < matrix.width; j++)
		{
			cin >> matrix.frame[i][j];
		}
	}
}

void multiplication(Matrix first, Matrix second, Matrix &result)
{
	if (first.width != second.height)
	{
		cout << "Multiplication error: Matrix's have incorrect sizes." << endl;
	}
	else
	{
		result.height = first.height;
		result.width = second.width;

		result.frame = new double*[result.height];

		for (int i = 0; i < result.height; i++)
		{
			result.frame[i] = new double[result.width];

			for (int j = 0; j < result.width; j++)
			{
				result.frame[i][j] = 0;

				for (int h = 0; h < first.width; h++)
				{
					result.frame[i][j] += first.frame[i][h] * second.frame[h][j];
				}
			}
		}
	}
}