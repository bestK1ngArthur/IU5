
int fun1(int param);
int fun2(int param);

struct Street {
	char title[30];
	int housesCount;
	float averagePayment;
	bool danger;
};

double findMin(double *fMas, int size);

void sortMas(Street *streets, int size, bool isAscending);

int freadStreetsToArray(Street *streetsArray, int streetsArraySize, FILE *file);
int freadStreetByNumber(Street *street, int number, FILE *file);

int fwriteStreetsFromArray(Street *streetsArray, int streetsArraySize, FILE *file);
int frewriteStreetByNumber(Street street, int number, int streetsCount, FILE *file);

int fprintStreets(FILE *file, int numberOfStreets);

int fremoveStreetByNumber(int number, int numberOfStreets, FILE *file);