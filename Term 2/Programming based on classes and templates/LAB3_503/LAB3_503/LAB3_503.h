#pragma once

#include "resource.h"
#include <iostream>

/*
typedef enum {

	ColorRed,
	ColorGreen,
	ColorBlue,
	ColorBlack,
	ColorWhite

} Color;
*/

class Point {
public:

	double x;
	double y;

	Point() {
		x = 0;
		y = 0;
	}

	Point(double dx, double dy) {
		x = dx;
		y = dy;
	}

	void print() {
		std::cout << "(" << x << ", " << y << ")";
	}
	void enter() {
		std::cout << "\tx:";
		std::cin >> x;
		std::cout << "\ty:";
		std::cin >> y;
	}
};

class Triangle {
private:

	int privateVar;

protected:

	int protectedVar;

public:

	static int counter;

	Point point1;
	Point point2;
	Point point3;

	/*
	Color strokeColor;
	Color fillColor;
	*/

	char strokeColor[30];
	char fillColor[30];

	Triangle() {
		point1 = Point();
		point2 = Point();
		point3 = Point();

		counter++;
	}

	Triangle(Point a, Point b, Point c) {
		point1 = a;
		point2 = b;
		point3 = c;

		counter++;
	}

	Triangle(Point *points) {
		point1 = points[0];
		point2 = points[1];
		point3 = points[2];

		counter++;
	}

	~Triangle() {
		//cout << "Triangle destroyed" << endl;
		counter--;
	}

	void print() {
		std::cout << "Triangle {";
		point1.print();
		std::cout << ", ";
		point2.print();
		std::cout << ", ";
		point3.print();
		std::cout << "}" << std::endl;
	}

	void enter() {
		std::cout << "Enter point 1:" << std::endl;
		point1.enter();
		std::cout << "Enter point 2:" << std::endl;
		point2.enter();
		std::cout << "Enter point 3:" << std::endl;
		point3.enter();
	}

	void move(int, int);
	void rotate() {

	}
};

class RightTriangle : public Triangle {
private:

	friend void printArray(RightTriangle *array, int size);

public:

	Point center;
	double square;

	RightTriangle():Triangle() {
		// что-то тут создаётся
	}

	RightTriangle(Point a, Point b, Point c):Triangle(a, b, c) {
		// что-то тут создаётся
	}

	~RightTriangle() {
		// что-то тут рушится
	}

	void print() {
		std::cout << "Right";
		Triangle::print();
	}

};

void printArray(RightTriangle *array, int size) {

	std::cout << "Array:" << std::endl;

	for (int i = 0; i < size; i++) {
		std::cout << i + 1 << ") ";
		array[i].print();
	}
}