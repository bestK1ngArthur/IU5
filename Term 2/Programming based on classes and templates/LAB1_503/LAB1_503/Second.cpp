#include "stdafx.h"

#include "LAB1_503.h"
#include <iostream>

using namespace std;

double findMin(double *fMas, int size) {

	double minVar = fMas[0];

	for(int i = 0; i < size; i++) {
		if (fMas[i] < minVar) { minVar = fMas[i]; }
	}

	cout << "minVar = " << minVar << endl;

	return minVar;
}

void sortMas(Street *streets, int size, bool isAscending) {

	if (isAscending) {

		for (int i = 0; i < size; i++)
		{
			for (int j = size - 1; j > i; j--)
			{
				if (streets[j].housesCount < streets[j - 1].housesCount)
				{
					swap(streets[j], streets[j - 1]);
				}
			}
		}

	} else {

		for (int i = 0; i < size; i++)
		{
			for (int j = size - 1; j > i; j--)
			{
				if (streets[j].housesCount > streets[j - 1].housesCount)
				{
					swap(streets[j], streets[j - 1]);
				}
			}
		}

	}	
}