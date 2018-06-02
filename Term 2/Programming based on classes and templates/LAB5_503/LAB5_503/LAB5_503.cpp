
#include "stdafx.h"
#include "LAB5_503.h"

#include <iostream>

using namespace std;

int multiplication2(int a = 1, int b = 2, int c = 3) {

	return a*b*c;
}

void main() {

	system("chcp 1251>0");

	cout << "LAB5_503" << endl << endl;

	// Пункт 4.3. Задание параметров функции по-умолчанию в прототипе
	cout << "Пункт 4.3. Задание параметров функции по-умолчанию в прототипе" << endl << endl;

	cout << "multiplication(10) = " << multiplication(10) << endl;
	cout << "multiplication(10, 20) = " << multiplication(10, 20) << endl;
	cout << "multiplication(10, 20, 30) = " << multiplication(10, 20, 30) << endl;

	cout << endl;

	// Пункт 4.4. Задание параметров функции по-умолчанию в описании
	cout << "Пункт 4.4. Задание параметров функции по-умолчанию в описании" << endl << endl;

	cout << "multiplication2(10) = " << multiplication2(10) << endl;
	cout << "multiplication2(10, 20) = " << multiplication2(10, 20) << endl;
	cout << "multiplication2(10, 20, 30) = " << multiplication2(10, 20, 30) << endl;

	cout << endl;

	// Пункт 4.5. Глобальные переменные при задании  параметров по умолчанию
	cout << "Пункт 4.5. Глобальные переменные при задании  параметров по умолчанию" << endl << endl;

	cout << "multiplication3(10) = " << multiplication3(10) << endl;
	cout << "multiplication3(10, 20) = " << multiplication3(10, 20) << endl;
	cout << "multiplication3(10, 20, 30) = " << multiplication3(10, 20, 30) << endl;

	cout << endl;

	// Пункт 4.6. Приоритеты задания параметров по-умолчанию 
	cout << "Пункт 4.6. Приоритеты задания параметров по-умолчанию" << endl << endl;

	//cout << "multiplication4(10) = " << multiplication4(10) << endl;
	//cout << "multiplication4(10, 20) = " << multiplication4(10, 20) << endl;
	//cout << "multiplication4(10, 20, 30) = " << multiplication4(10, 20, 30) << endl;

	cout << "..выводятся ошибки" << endl << endl;

	// Пункт 4.7. Перегрузка функций с одинаковым числом параметров
	cout << "Пункт 4.7. Перегрузка функций с одинаковым числом параметров" << endl << endl;

	cout << "maximum(10, 20) = " << maximum(10, 20) << endl;
	cout << "maximum(10.1f, 20.2f) = " << maximum(10.1f, 20.2f) << endl;
	cout << "maximum(10.23, 20.34) = " << maximum(10.23, 20.34) << endl;

	cout << endl;

	// Пункт 4.8. Перегрузка функций  с разным числом параметров
	cout << "Пункт 4.8. Перегрузка функций  с разным числом параметров" << endl << endl;

	cout << "maximum(10, 20) = " << maximum(10, 20) << endl;
	cout << "maximum(10, 20, 30) = " << maximum(10, 20, 30) << endl;
	cout << "maximum(10, 20, 30, 40) = " << maximum(10, 20, 30, 40) << endl;

	cout << endl;

	// Пункт 4.9. Внутренняя одноместная перегрузка операций класса Test
	cout << "Пункт 4.9. Внутренняя одноместная перегрузка операций класса Test" << endl << endl;

	Test a(5);
	Test c(0);
	c = a--; //  Присваивание объектов
	cout << "Постфиксная a--(с) = "<< c.Num<< " После операции a = " << a.Num << endl;
	c = --a;
	cout << "Префиксная --a(с) = "<< c.Num<< " После операции a = " << a.Num << endl;

	cout << endl;

	// Пункт 4.10. Внутренняя одноместная перегрузка операций 
	cout << "Пункт 4.10. Внутренняя одноместная перегрузка операций" << endl << endl;

	Point point1 = Point(1, 5);

	cout << "До операции ++: ";
	point1.print();
	cout << endl;
	++point1;
	cout << "После операции ++: ";
	point1.print();
	cout << endl << endl;

	// Пункт 4.11. Внутренняя двуместная перегрузка операций
	cout << "Пункт 4.11. Внутренняя двуместная перегрузка операций" << endl << endl;

	Point p1 = Point(1, 2);
	Point p2 = Point(2, 3);

	Point p3 = p1 + p2;
	p1.print(); cout << " + "; p2.print(); cout << " = "; p3.print(); cout << endl;

	p3 = p1 - p2;
	p1.print(); cout << " - "; p2.print(); cout << " = "; p3.print(); cout << endl << endl;

	// Пункт 4.12. Внешняя одноместная перегрузка операций
	cout << "Пункт 4.12. Внешняя одноместная перегрузка операций" << endl << endl;

	Point1 p11 = Point1(1, 3);
	
	cout << "До операции --: ";
	p11.print();
	cout << endl;
	--p11;
	cout << "После операции --: ";
	p11.print();
	cout << endl << endl;

	// Пункт 4.13. Внешняя двуместная перегрузка операций 
	cout << "Пункт 4.13. Внешняя двуместная перегрузка операций" << endl << endl;

	Point1 pp1 = Point1(1, 2);
	Point1 pp2 = Point1(2, 3);

	Point1 pp3 = pp1 * 3;
	pp1.print(); cout << " * "; pp2.print(); cout << " = "; pp3.print(); cout << endl << endl;

	// Пункт 4.14. Внешняя перегрузка операций потокового ввода и вывода
	cout << "Пункт 4.14. Внешняя перегрузка операций потокового ввода и вывода" << endl << endl;

	Point testPoint1 = Point(0, 0);
	cin >> testPoint1;
	cout << "Было введено: "; testPoint1.print(); cout << endl << endl;

	// Пункт 4.15. Перегрузка операций индексирования
	cout << "Пункт 4.15. Перегрузка операций индексирования" << endl << endl;

	int iMas[] = {10,11,12,13,14,15};
	Mas mas(iMas, sizeof(iMas)/sizeof(int));
	cout << "NewMas[4] = " << mas[4] << endl << endl; 

	// Пункт 4.16. Перегрузка операций сравнения
	cout << "Пункт 4.16. Перегрузка операций сравнения" << endl << endl;

	Point ppoint1 = Point(1, 1);
	Point ppoint2 = Point(1, 1);

	cout << "Point(1, 1) == Point(1, 1) = " << boolalpha << (ppoint1 == ppoint2) << endl << endl;

	// Пункт 4.17. Перегруженные операции при наследовании классов
	cout << "Пункт 4.17. Перегруженные операции при наследовании классов" << endl << endl;

	ChildPoint pointt1 = ChildPoint(1, 5);

	cout << "До операции ++: ";
	pointt1.print();
	cout << endl;
	++pointt1;
	cout << "После операции ++: ";
	pointt1.print();
	cout << endl << endl;

	system("pause");
}

int multiplication(int a, int b, int c) {

	return a*b*c;
}

int multiplication3(int a, int b, int c) {

	return a*b*c;
}

int multiplication4(int a, int b, int c) {

	return a*b*c;
}

int maximum(int a, int b) {

	return (a > b) ? a:b;
}

float maximum(float a, float b) {

	return (a > b) ? a:b;
}

double maximum(double a, double b) {

	return (a > b) ? a:b;
}

int maximum(int a, int b, int c) {

	if ((a > b) && (a > c)) {
		return a;
	} else if ((b > a) && (b > c)) {
		return b;
	} else {
		return c;
	}
}

int maximum(int a, int b, int c, int d) {

	return maximum(maximum(a,b), maximum(c,d));
}