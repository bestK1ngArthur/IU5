// LAB7_503.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "LAB7_503.h"
#include <iostream>

using namespace std;

void vPrint(vector<int>& v) {
	
	int i;
	for( i = 0; (unsigned) i < v.size( ) ; i++) {
		cout << "v[" << i << "] = " << v[i] << endl;
	}
}

void vIterPrint(vector<int>& v) {
	
	vector<int>::iterator iter;
	for(iter = v.begin(); iter != v.end(); iter++) {
		cout << "v[] = " << *iter << endl;
	}
}

void vIterPrint(vector<Complex>& v) {
	
	vector<Complex>::iterator iter;
	for(iter = v.begin(); iter != v.end(); iter++) {
		cout << "complexVector[] = "<< *iter << endl;
	}
}


void main() {

	system("chcp 1251>0");

	cout << "LAB7_503" << endl << endl;

	///////////////////////////////////////////////////////////////

	cout << "Пункт 4.4. Выполнить описание вектора vector типа int/long" << endl << endl;
	cout << "\tОПИСАНИЕ ВЕКТОРА" << endl << endl;

	vector <int> intVector;

	/////////////////////////////////////////////////////////////////

	cout << "Пункт 4.5. Выполнить заполнение массива - вектор" << endl << endl;
	cout << "\tЗАПОЛНЕНИЕ МАССИВА" << endl << endl;

	for (int i = 0; i < 5; i++) {

		intVector.push_back(i);
		cout << "intVector["<< i << "] = "<< intVector[i] << endl;
	
	}

	cout << endl;

	/////////////////////////////////////////////////////////////////

	cout << "Пункт 4.6. Создать свою функцию распечатки векторов типа int/long" << endl << endl;
	cout << "\tФУНКЦИЯ ПЕЧАТИ МАССИВА" << endl << endl;

	vPrint(intVector);
	cout << endl;

	/////////////////////////////////////////////////////////////////

	cout << "Пункт 4.7. Использование итератора для векторов" << endl << endl;
	cout << "\tИТЕРАТОР" << endl << endl;

	vector<int>::iterator iter; // Объявление итератора

	cout << "Печать с помощью итератора:" << endl;
	for(iter = intVector.begin(); iter != intVector.end(); iter++) {
		cout << "v[] = " << *iter << endl;
	}
	cout << endl;

	/////////////////////////////////////////////////////////////////

	cout << "Пункт 4.8. Создать функцию распечатки векторов типа int/long с итератором" << endl << endl;
	cout << "\tФУНКЦИЯ С ИТЕРАТОРОМ" << endl << endl;

	vIterPrint(intVector);
	cout << endl;

	/////////////////////////////////////////////////////////////////

	cout << "Пункт 4.9. Выполнить добавление элементов в массив по номеру" << endl << endl;
	cout << "\tДОБАВЛЕНИЕ В МАССИВ" << endl << endl;

	intVector.insert(intVector.begin() + 2, 100);
	vIterPrint(intVector);

	cout << endl;

	/////////////////////////////////////////////////////////////////

	cout << "Пункт 4.10. Выполнить удаление элементов из массива по номеру" << endl << endl;
	cout << "\tУДАЛЕНИЕ ИЗ МАССИВА" << endl << endl;

	intVector.erase(intVector.begin()); 
	vIterPrint(intVector);

	cout << endl;

	/////////////////////////////////////////////////////////////////

	cout << "Пункт 4.11. Выполнить очистку массива и проверку пустого массива" << endl << endl;
	cout << "\tОЧИСТКА МАССИВА" << endl << endl;

	if (!intVector.empty()) {

		intVector.clear();

	}

	if (intVector.empty()) {

		cout << "Массив очищен" << endl << endl;

	}

	/////////////////////////////////////////////////////////////////

	cout << "Пункт 4.12. Выполнить описание вектора для своего класса" << endl << endl;
	cout << "\tВЕКТОР КЛАССА ЗАДАНИЯ" << endl << endl;

	vector <Complex> complexVector;

	for (int i = 0; i < 5; i++) {

		complexVector.push_back(Complex(i, 5-i, 5));
		cout << "complexVector["<< i << "] = "<< complexVector[i] << endl;
	
	}
	
	cout << endl;

	/////////////////////////////////////////////////////////////////

	cout << "Пункт 4.13. Выполнить методы класса vector для собственного класса" << endl << endl;
	cout << "\tРАБОТА С МАССИВАМ" << endl << endl;

	complexVector.insert(complexVector.begin() + 2, Complex(11, 22, 6));

	for (int i = 0; i < 6; i++) {

		cout << "complexVector["<< i << "] = "<< complexVector[i] << endl;
	
	}

	cout << endl;

	/////////////////////////////////////////////////////////////////

	cout << "Пункт 4.14. Создать функцию распечатки массивов своего класса с итератором" << endl << endl;
	cout << "\tФУНКЦИЯ С ИТЕРАТОРОМ" << endl << endl;

	vIterPrint(complexVector);
	cout << endl;

	/////////////////////////////////////////////////////////////////

	cout << "Пункт 4.15.Выполнить описание класса MFC по варианту для своего класса" << endl << endl;
	cout << "\tОПИСАНИЕ MFC" << endl << endl;

	ABArray myArray;

	cout << "Класс ABArray создан" << endl << endl;

	/////////////////////////////////////////////////////////////////

	cout << "Пункт 4.16.Выполнить заполнение массива для своего класса" << endl << endl;
	cout << "\tЗАПОЛНЕНИЕ МАССИВА" << endl << endl;

	for (int i = 0; i < 5; i++) {

		myArray.Add(Complex(i, (i, 5-i), 5));

	}

	cout << myArray;
	cout << endl;

	/////////////////////////////////////////////////////////////////

	cout << "Пункт 4.17.Выполнить манипуляции в массиве" << endl << endl;
	cout << "\tРАБОТА С МАССИВОМ. " << endl << endl;

	cout << myArray.GetAt(3) << endl << endl;

	myArray.SetAt(3, Complex(100, 200, 5));
	cout << myArray.GetAt(3) << endl << endl;

	myArray.InsertAt(3, Complex(100, 200, 5));
	cout << myArray;
	cout << endl;

	myArray.RemoveAt(3);
	cout << myArray;
	cout << endl;

	//myArray.RemoveAll();

	ABArray myArray2;
	myArray2.Add(Complex(0, 0, 0));
	myArray2.Append(myArray);

	cout << myArray2;
	cout << endl;

	system("pause");

}
