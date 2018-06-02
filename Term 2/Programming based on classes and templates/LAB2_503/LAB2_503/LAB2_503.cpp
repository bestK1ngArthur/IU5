
#include "stdafx.h"
#include "LAB2_503.h"

#include <iostream>
#include <fstream>

#include <iomanip>

using namespace std;

extern int iSecond;

ostream & hexbase(ostream & s)
{
	s << hex << showbase;

	return s;
}

ostream & ccc(ostream & s)
{
	s << setw(20) << setfill('!');

	return s;
}

char * Spravka(void);
char * Cat(char *str1, char *str2);

void printRect(Rect *rect);
void getRect(Rect *rect);

ostream & operator<<(ostream & s, Rect rect) {

	printRect(&rect);
	return s;
}

istream & operator>>(istream & s, Rect & rect) {

	getRect(&rect);
	return s;
}

ofstream & operator<<(ofstream & s, Rect rect) {

	s.write((char *)&rect, sizeof(Rect));
	return s;
}

ifstream & operator>>(ifstream & s, Rect & rect) {

	s.read((char *)&rect, sizeof(Rect));
	return s;
}

void main() {

	system(" chcp 1251 > nul");

	cout << "LAB2_503 ИУ5-23 Артём Белков" << endl << endl;

	// Пункт 4.3

	cout << "4.3. Выполнить операции ввода и вывода для переменных стандартных типов" << endl << endl;

	int iVal;
	cout << "Введите iVal: ";
	cin >> iVal;
	cout << "Было введено значение iVal = " << iVal << endl << endl;

	double dVal;
	cout << "Введите dVal: ";
	cin >> dVal;
	cout << "Было введено значение dVal = " << dVal << endl << endl;

	bool bVal;
	cout << "Введите bVal: ";
	cin >> bVal;
	cout << "Было введено значение bVal = " << boolalpha << bVal << endl << endl;

	char sMas[100];
	cout << "Введите sMas: ";
	cin >> sMas;
	cout << "Было введено значение sMas = " << sMas << endl << endl;

	iVal = 5;
	int *pInt = &iVal;
	cout << "*pInt = " << *pInt << endl;
	cout << "Введите *pInt: ";
	cin >> *pInt;
	cout << "Было введено значение *pInt = " << *pInt << endl << endl;

	// Пункт 4.4

	cout << "4.4. Выполнить операции ввода и вывода с помощью методов get, getline, put, write" << endl << endl;

	char ch;
	cout << "Работа с get и put. Введите строку (конец ввода - '.'):";
	do {

		ch = cin.get();
		cout.put(ch);

	} while (ch != '.');

	cout << endl;

	cout.write("Работа с getline и write. Введите строку (конец ввода - '.'):\n",
		sizeof("Работа с getline и write. Введите строку (конец ввода - '.'):\n") / sizeof(char)-1);

	char str[30];
	cin.getline(str, 30, '.');

	cout << str << endl << endl;

	// Пункт 4.5

	cout << "4.5. Продемонстрировать использование методов форматирования вывода в поток" << endl << endl;

	cout << "Введите sMas: ";
	cin >> sMas;

	cout.fill('_');
	cout.width(30);
	cout << setw(50) << "Было введено значение sMas = " << sMas << endl << endl;

	cout << "Введите dVal: ";
	cin >> dVal;

	cout << "Было введено значение dVal(dec) = " << dVal << endl;

	cout << "До precision(2): dVal = " << dVal << endl;
	cout.precision(2);
	cout << "После precision(2): dVal = " << dVal << endl << endl;

	// Пункт 4.6

	cout << "4.6. Продемонстрировать использование манипуляторов для потоковых объектов" << endl << endl;

	cout << "Введите iVal: ";
	cin >> iVal;
	cout << "Было введено значение iVal = " << iVal << endl << endl;
	cout.unsetf(ios_base::dec);

	cout.setf(ios_base::hex);
	cout << "hex iVal = " << iVal << endl;
	cout.unsetf(ios_base::hex);

	cout.setf(ios_base::dec);
	cout << "dec iVal = " << iVal << endl;
	cout.unsetf(ios_base::dec);

	cout.setf(ios_base::oct);
	cout << "oct iVal = " << iVal << endl << endl;
	cout.unsetf(ios_base::oct);

	cout << "setbase(16) ival = " << setbase(16) << iVal << endl;
	cout << "setbase(10) ival = " << setbase(10) << iVal << endl;
	cout << "setbase(8) ival = " << setbase(8) << iVal << endl << endl;

	cout << "Для iVal hex - " << setbase(16) << showbase << iVal << endl;
	cout << "Для iVal oct - " << setbase(8) << showbase << iVal << endl;
	cout << "Для iVal dec - " << setbase(10) << showbase << iVal << endl << endl;

	cout << "Введите dVal: ";
	cin >> dVal;
	cout << "Было введено значение dVal = " << dVal << " = " << scientific << dVal << endl << endl;

	// Пункт 4.7

	cout << "4.7. Продемонстрировать использование пользовательского манипулятора" << endl << endl;

	cout << "iVal = " << hexbase << iVal << endl << endl;

	// Пункт 4.8

	cout << "4.8. Продемонстрировать вызов функций в потоках ввода и вывода и проектах" << endl << endl;

	cout << Spravka() << endl << endl;

	cout << dec << "iSecond = " << iSecond << endl << endl;

	char str1[10] = "12345";
	char str2[5] = "6789";

	cout << "Cat(\"12345\", \"6789\") = " << Cat(str1, str2) << endl << endl;

	// Пункт 4.9

	cout << "4.9. Вывод и вывод объектов пользовательских классов в стандартных потоках" << endl << endl;

	Rect rect = Rect();

	printRect(&rect);
	cout << endl;

	getRect(&rect);

	cout << endl;
	printRect(&rect);
	cout << endl;

	// Пункт 4.10

	cout << "4.10. Работа с файлами в классах потокового ввода и вывода" << endl << endl;

	cout << "\tСОЗДАНИЕ НОВОГО ФАЙЛА" << endl << endl;

	int rectsSize = 3;

	Rect *rects = new Rect[rectsSize];
	rects[0] = Rect(1, 2, 10, 10);
	rects[1] = Rect(2, 3, 10, 10);
	rects[2] = Rect(3, 4, 10, 10);

	ofstream out("Var_G03.bin", ios::out | ios::binary);
	
	if (!out.fail()) {
		out.write((char *)rects, sizeof(Rect) * rectsSize);
	}

	out.close();

	delete[]rects;

	cout << "Файл Var_G03.bin создан" << endl << endl;

	cout << "\tЧТЕНИЕ И РАСПЕЧАТКА ФАЙЛА" << endl << endl;

	rects = new Rect[rectsSize];

	ifstream in("Var_G03.bin", ios::in | ios::binary);

	if (!in.fail()) {
		in.read((char *)rects, sizeof(Rect) * rectsSize);
	}

	in.close();

	for (int i = 0; i < rectsSize; i++)
	{
		printRect(&rects[i]);
	}

	cout << endl;

	delete[]rects;
	
	cout << "\tИЗМЕНЕНИЕ И РАСПЕЧАТКА ФАЙЛА" << endl << endl;
	
	fstream file;

	Rect additionalRect = Rect(666, 666, 10, 10);

	file.open("Var_G03.bin", ios::out | ios::app | ios::binary);
	
	if (!file.fail())
	{
		file.write((char *)&additionalRect, sizeof(Rect));
		rectsSize++;
	}

	file.close();

	file.clear();

	rects = new Rect[rectsSize];

	file.open("Var_G03.bin", ios::binary | ios::in);

	if (!file.fail())
	{
		file.read((char *)rects, sizeof(Rect)* rectsSize);
	}

	file.close();

	for (int i = 0; i < rectsSize; i++)
	{
		printRect(&rects[i]);
	}
	cout << endl;

	delete[]rects;

	cout << "\tЧТЕНИЕ ЗАПИСИ ПО НОМЕРУ" << endl << endl;

	Rect readRect;
	int numberOfRect = 2;

	in.open("Var_G03.bin", ios::in | ios::binary);

	if (!in.fail()) {
		in.seekg(sizeof(Rect) * (numberOfRect - 1), ios::beg);
		in.read((char *)&readRect, sizeof(Rect));
	}

	in.close();

	printRect(&readRect);
	cout << endl;

	cout << "\tСОЗДАНИЕ НОВОГО ФАЙЛА" << endl << endl;

	rects = new Rect[rectsSize];

	in.open("Var_G03.bin", ios::in | ios::binary);

	if (!in.fail()) {
		in.read((char *)rects, sizeof(Rect)* rectsSize);
	}

	in.close();

	out.open("LR2.bin", ios::out | ios::binary | ios::trunc);

	int newRectsSize = 0;

	if (!out.fail()) {

		for (int i = 0; i < rectsSize; i++) {

			if (i % 2 == 0) {
				out.write((char *)&rects[i], sizeof(Rect));
				newRectsSize++;
			}

		}

		cout << "Файл LR2.bin создан" << endl << endl;
	}

	out.close();

	Rect *newRects = new Rect[newRectsSize];

	in.open("LR2.bin", ios::binary | ios::in);

	if (!in.fail()) {
		in.read((char *)newRects, sizeof(Rect)* newRectsSize);
	}

	in.close();

	for (int i = 0; i < newRectsSize; i++) {
		printRect(&newRects[i]);
	}

	cout << endl;

	delete[]rects;
	delete[]newRects;

	// Пункт 4.11

	cout << "4.11. Буферизация в файловых потоках ввода и вывода" << endl << endl;

	ifstream inbuf("LR2.bin", ios::binary | ios::in); // описание и открытие файла
	cout << hex << endl << inbuf.rdbuf() << endl; // Вывод всего файла

	// Дополнительные требования для сильных студентов

	cout << "Дополнительные требования для сильных студентов" << endl << endl;

	cout << "\tПЕРЕГРУЗКА << и >>" << endl << endl;

	Rect rect12 = Rect();
	cin >> rect12;
	cout << rect12;


	system("pause");
}

void writeRectsFromArray(Rect *rects, int count) {
	
	ofstream file;

	file.open("Var_G03.bin", ios::out | ios::binary);
	file.write((char *)rects, sizeof(Rect) * count);
	file.close();

}

void readRectsToArray(Rect *rects, int count) {

	ifstream file;

	file.open("Var_G03.bin", ios::in | ios::binary);
	file.read((char *)rects, sizeof(Rect) * count);
	file.close();

}