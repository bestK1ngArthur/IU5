#include <iostream>
#include <math.h>

using namespace std;

struct Point
{
	int x, y;
};

int main()
{
	Point A, B, C;

	cout << "Task 9" << endl;

	cout << "Enter A: ";
	cin >> A.x >> A.y;

	cout << "Enter B: ";
	cin >> B.x >> B.y;
	
	cout << "Enter C: ";
	cin >> C.x >> C.y;

	double ab = sqrt(pow((double)(A.x - B.x), 2) + pow((double)(A.y - B.y), 2));
	double bc = sqrt(pow((double)(B.x - C.x), 2) + pow((double)(B.y - C.y), 2));
	double ca = sqrt(pow((double)(C.x - A.x), 2) + pow((double)(C.y - A.y), 2));

	double p = 0.5 * (ab + bc + ca);

	double S = sqrt(p*(p - ab)*(p - bc)*(p - ca));

	cout << "Square: " << S << endl;

	system("pause");

	return 0;
}