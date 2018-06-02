#include "stdafx.h"
#include "LAB4_503.h"

#include <iostream>

using namespace std;

#define RAZM 5
#define swap(type, a, b) {type t; t = a; a = b; b = t;}
#define cmp(a, b) (a >= b)

typedef SuperEllipse<int> TypeDefEllips; 

void main()
{
	system("chcp 1251 > nul");
	cout << "LAB4_503" << endl << endl;

	// Пункт 4.3. Макрокоманды и переменные этапа компиляции
	cout << "Пункт 4.3. Макрокоманды и переменные этапа компиляции" << endl << endl;

	int intArray[RAZM] = { 1, 2, 3, 4, 5 };
	int sum = 0;

	for (size_t i = 0; i < RAZM; i++) {
		sum += intArray[i];
	}

	cout << "Результат суммирования = " << sum << endl;

	int a = 13;
	int b = 666;

	cout << "a = " << a << ", b = " << b << " -> swap -> ";
	swap(int, a, b);
	cout << "a = " << a << ", b = " << b << endl;

	cout << "cmp(a, b) = " << boolalpha << cmp(a, b) << endl;
	cout << "cmp(b, a) = " << boolalpha << cmp(b, a) << endl << endl;

	// Пункт 4.4. Шаблоны функции Swap 
	cout << "Пункт 4.4. Шаблоны функции Swap" << endl << endl;

	cout << "Целый тип (указатель):" << endl;
	cout << "До Swap: x = " << a << " y = " << b << endl;
	swapPointers(&a, &b);
	cout << "После Swap: x = " << a << " y = " << b << endl;

	double x = 10.4;
	double y = 4.10;

	cout << "Вещественный тип (указатель):" << endl;
	cout << "До Swap: x = " << x << " y = " << y << endl;
	swapPointers(&x, &y);
	cout << "После Swap: x = " << x << " y = " << y << endl;

	cout << "Целый тип (ссылка):" << endl;
	cout << "До Swap: x = " << a << " y = " << b << endl;
	swapLinks(a, b);
	cout << "После Swap: x = " << a << " y = " << b << endl;

	cout << "Вещественный тип (ссылка):" << endl;
	cout << "До Swap: x = " << x << " y = " << y << endl;
	swapLinks(x, y);
	cout << "После Swap: x = " << x << " y = " << y << endl << endl;

	// Пункт 4.5. Шаблон функции с несколькими параметрами (сумма)  
	cout << "Пункт 4.5. Шаблон функции с несколькими параметрами (сумма)" << endl << endl;

	int intArr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	cout << "Сумма int = " << total<int, sizeof(intArr)/sizeof(int)>(intArr) << endl;
	float floatArr[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f, 6.6f, 7.7f, 8.8f, 9.9f};
	cout << "Сумма float = " << total<float, sizeof(floatArr)/sizeof(float)>(floatArr) << endl;
	double doubleArr[] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
	cout << "Сумма double = " << total<double, sizeof(doubleArr)/sizeof(double)>(doubleArr) << endl << endl;

	// Пункт 4.6. Специализация шаблона функции (д.т.) 
	cout << "Пункт 4.6. Специализация шаблона функции (д.т.)" << endl << endl;

	char ch = 'a';
	swapPointers(&ch, &ch);
	cout << endl;

	// Пункт 4.7. Шаблон класса с внутренними методами с одним параметром 
	cout << "Пункт 4.7. Шаблон класса с внутренними методами с одним параметром" << endl << endl;

	SuperEllipse<int> intEllipse = SuperEllipse<int>(1, 2, 3, 4);
	cout << "Эллипс int (Эллипс один параметр):" << endl;
	intEllipse.print();
	cout << endl;

	SuperEllipse<float> floatEllipse = SuperEllipse<float>(1.1f, 2.2f, 3, 4);
	cout << "Эллипс float (Эллипс один параметр):" << endl;
	intEllipse.print();
	cout << endl;

	SuperEllipse<double> doubleEllipse = SuperEllipse<double>(1.1, 2.2, 3, 4);
	cout << "Эллипс double (Эллипс один параметр):" << endl;
	intEllipse.print();
	cout << endl;

	// Пункт 4.8. Шаблон класса с внутренними методами с двумя параметрами
	cout << "Пункт 4.8. Шаблон класса с внутренними методами с двумя параметрами" << endl << endl;

	DoubleSuperEllipse<int, 5> sEllipse  = DoubleSuperEllipse<int, 5>(1, 2, 4);
	cout << "Эллипс int (Эллипс два параметра):" << endl;
	sEllipse.print();
	cout << endl;

	// Пункт 4.9. Шаблон класса с внешними методами и двумя параметрами
	cout << "Пункт 4.9. Шаблон класса с внешними методами и двумя параметрами" << endl << endl;

	DoubleSuperEllipse<long, 5> dEllipse  = DoubleSuperEllipse<long, 5>(10, 20, 4);
	cout << "Эллипс long (Эллипс два параметра):" << endl;
	dEllipse.print();
	cout << endl;

	// Пункт 4.10. Описание нового класса на основе шаблона класса 
	cout << "Пункт 4.10. Описание нового класса на основе шаблона класса" << endl << endl;

	FixedDoubleSuperEllipse fixedEllipse = FixedDoubleSuperEllipse(10, 20, 666, 4);
	cout << "Эллипс long с начальной закраской:" << endl;
	fixedEllipse.print();
	cout << endl;

	// Пункт 4.11. Описание нового шаблона класса на основе шаблона класса
	cout << "Пункт 4.11. Описание нового шаблона класса на основе шаблона класса" << endl << endl;

	LinedSuperEllipse<int> linedEllipse1 = LinedSuperEllipse<int>(10, 20, 12, 45, 4);
	cout << "Эллипс int (шаблон):" << endl;
	linedEllipse1.print();
	cout << endl;

	LinedSuperEllipse<float> linedEllipse2 = LinedSuperEllipse<float>(10.3f, 2.0f, 12, 45, 4);
	cout << "Эллипс float (шаблон):" << endl;
	linedEllipse2.print();
	cout << endl;

	// Пункт 4.12. Описание нового шаблона класса на основе шаблона класса
	cout << "Пункт 4.12. Описание нового шаблона класса на основе шаблона класса" << endl << endl;

	TypeDefEllips typedefEllipse = TypeDefEllips(1, 2, 3, 4);
	cout << "Эллипс int (typedef):" << endl;
	typedefEllipse.print();
	cout << endl;

	system("PAUSE");
}

template <class T> 
void swapPointers(T *a, T *b)
{
	if (a == b) {

		cout << "Одинаковые адреса!" << endl;

	} else {

		T  Temp = *a;
		*a = *b;
		*b = Temp;

	}
};

template <class T> 
void swapLinks(T & a, T & b)
{
	T  Temp = a;
	a = b;
	b = Temp;
}

template <class T, int size>  
T total(T *arr) {

	T result = 0;

	for(int i = 0; i < size; i++) {
		result += arr[i];
	}

	return result;
}

template <class T, int fill>
void DoubleSuperEllipse<T, fill>::fastMove(int dx, int dy) {

	SuperEllipse::x = dx;
	SuperEllipse::y = dy;
}
