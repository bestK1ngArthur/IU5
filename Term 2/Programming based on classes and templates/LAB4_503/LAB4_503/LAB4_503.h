#pragma once

#include "resource.h"
#include <iostream>

using namespace std;

template <class T> 
void swapPointers(T *a, T *b);

template <class T> 
void swapLinks(T & a, T & b);

template <class T, int size>  
T total(T *arr);

template <class T> 
class SuperEllipse { 
public:
	
	T x;
	T y;

	int typeFill;
	int lineThickness;

	SuperEllipse() {
		x = 0;
		y = 0;
		typeFill = 0;
		lineThickness = 0;
	}
	SuperEllipse(T dx, T dy, int dTypeFill, int dLineThickness) {
		x = dx;
		y = dy;
		typeFill = dTypeFill;
		lineThickness = dLineThickness;
	}

	void print() {
		cout << "Заполнение: " << typeFill << endl;
		cout << "Толщина линий: " << lineThickness << endl;
		cout << "x = " << x << " y = " << y << endl;
	};
	void move(T dx, T dy) {
		x = dx;
		y = dy;
	}
	void setTypeFill(int dTypeFill) {
		typeFill = dTypeFill;
	}

};

template <class T, int fill> 
class DoubleSuperEllipse : public SuperEllipse<T> {
public:

	DoubleSuperEllipse(T dx, T dy, int dLineThickness):SuperEllipse(dx, dy, fill, dLineThickness) {

	}
	DoubleSuperEllipse():SuperEllipse() {
		SuperEllipse:typeFill = fill;
	}

	void fastMove(int dx, int dy);

};

class FixedDoubleSuperEllipse : public DoubleSuperEllipse<long, 4> {
public:

	int fillColor;

	FixedDoubleSuperEllipse() : DoubleSuperEllipse<long, 4>() {
		fillColor = 0;
	}
	FixedDoubleSuperEllipse(long dx, long dy, int  dFillColor, int dLineThickness) : DoubleSuperEllipse<long, 4>(dx, dy, dLineThickness) {
		fillColor = dFillColor;
	}

	void print() {
		cout << "Заполнение: " << typeFill << endl;
		cout << "Цвет закраски: " << fillColor << endl;
		cout << "Толщина линий: " << lineThickness << endl;
		cout << "x = " << x << " y = " << y << endl;
	};
};

template <class T> 
class LinedSuperEllipse : public SuperEllipse<T> {
public:

	int lineType;

	LinedSuperEllipse(T dx, T dy, int dTypeFill, int dLineType, int dLineThickness):SuperEllipse(dx, dy, dTypeFill, dLineThickness) {
		lineType = dLineType;
	}

	void print() {
		cout << "Заполнение: " << typeFill << endl;
		cout << "Вид линий: " << lineType << endl;
		cout << "Толщина линий: " << lineThickness << endl;
		cout << "x = " << x << " y = " << y << endl;
	};
};