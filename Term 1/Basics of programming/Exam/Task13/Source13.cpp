#include <iostream>

using namespace std;

int main()
{
	int K;

	cout << "Task 13" << endl;

	cout << "Enter K: ";
	cin >> K;

	cout << "Enter array D: ";
	
	int *arrayD = new int[K];
	int *arrayA = new int[K];
	int *arrayB = new int[K];

	int average = 0;

	for (int i = 0; i < K; i++)
	{
		cin >> arrayD[i];
		average += arrayD[i];
	}

	average /= K;

	int indexA = 0, indexB = 0;

	for (int indexD = 0; indexD < K; indexD++)
	{
		if (arrayD[indexD] > average)
		{
			arrayA[indexA] = arrayD[indexD];
			indexA++;
		} 
		else
		{
			arrayB[indexB] = arrayD[indexD];
			indexB++;
		}
	}

	cout << "Array A: [";
	for (int i = 0; i < indexA; i++)
	{
		cout << arrayA[i] << ",";
	}
	cout << "\b" << "]" << endl;

	cout << "Array B: [";
	for (int i = 0; i < indexB; i++)
	{
		cout << arrayB[i] << ",";
	}
	cout << "\b" << "]" << endl;

	system("pause");

	return 0;
}