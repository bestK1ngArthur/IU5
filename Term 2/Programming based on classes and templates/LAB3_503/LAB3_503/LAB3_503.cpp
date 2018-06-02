
#include "stdafx.h"
#include "LAB3_503.h"

using namespace std;

int Triangle::counter = 0;

void Triangle::move(int dx, int dy) {

	Point *points[3] = { &point1, &point2, &point3 };

	for (int i = 0; i < 3; i++) {

		points[i]->x += dx;
		points[i]->y += dy;
	}
}

void main() {
	
	system(" chcp 1251 > nul");

	cout << "LAB3_503 ИУ5-23 Артём Белков" << endl << endl;

	// Пункт 4.7. Продемонстрировать работу с объектами класса
	cout << "Пункт 4.7. Продемонстрировать работу с объектами класса" << endl << endl;

	Triangle triangle;

	// Конструктор 1
	triangle = Triangle();
	// Конструктор 2
	triangle = Triangle(Point(1, 2), Point(3, 4), Point(5, 6));
	// Конструктор 3
	Point points[3] = { Point(9, 8), Point(7, 6), Point(5, 4) };
	triangle = Triangle(points);

	cout << "counter = " << Triangle::counter << endl << endl;

	// Печать
	triangle.print();

	// Копирование
	Triangle triangleCopy = triangle;
	
	cout << "copy";
	triangle.print();
	cout << endl;

	// Вызов методов
	triangle.move(11, 0);

	triangle.print();
	cout << endl;

	triangle.enter();

	triangle.print();
	cout << endl;

	// Преобразование
	triangle.point1 = Point(66, 66);
	triangle.print();

	// Динамический
	Triangle *dynamicTriangle = new Triangle(Point(1, 2), Point(3, 4), Point(5, 6));
	dynamicTriangle->print();
	delete dynamicTriangle;

	// Массив
	Triangle triangles[30];
	for (int i = 0; i < 30; i++) {
		triangles[i] = Triangle(Point(rand() % 100, rand() % 100),
								Point(rand() % 100, rand() % 100),
								Point(rand() % 100, rand() % 100));
		
		if (i == 3) {
			triangles[i].print();
		}
	}
	cout << endl;

	// Работа с файлом
	// ...............

	// Пункт 4.8. Проверить использование режима защиты protected и private

	//cout << triangle.privateVar;
	//cout << triangle.protectedVar;

	// Пункт 4.9. Проверить использование статических переменных в классе 
	cout << "Пункт 4.9. Проверить использование статических переменных в классе" << endl << endl;

	cout << "counter = " << Triangle::counter << endl << endl;

	// Пункт 4.11. Продемонстрировать работу с этим классом наследником
	cout << "Пункт 4.11. Продемонстрировать работу с этим классом наследником" << endl << endl;

	// Конструктор
	RightTriangle rightTriangle = RightTriangle(Point(1, 2), Point(3, 4), Point(5, 6));
	
	// Вызов методов
	rightTriangle.print();
	cout << endl;

	// Вызов базовых методов
	rightTriangle.enter();
	rightTriangle.print();
	cout << endl;

	// Массив
	RightTriangle rightTriangles[10];
	for (int i = 0; i < 10; i++) {
		rightTriangles[i] = RightTriangle(Point(rand() % 100, rand() % 100),
						       			  Point(rand() % 100, rand() % 100),
									      Point(rand() % 100, rand() % 100));
		if (i == 3) {
			rightTriangles[i].print();
		}
	}

	// Friend-функция
	cout << endl;
	printArray(rightTriangles, 10);
	cout << endl;

	system("Pause");
}
