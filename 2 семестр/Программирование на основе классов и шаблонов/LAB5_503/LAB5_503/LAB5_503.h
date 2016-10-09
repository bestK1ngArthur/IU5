#pragma once

#include "resource.h"
#include <iostream>

using namespace std;

int ip1 = 1;
int ip2 = 2;
int ip3 = 3;

int multiplication(int a = 1, int b = 2, int c = 3);
int multiplication2(int a, int b, int c);
int multiplication3(int a = ip1, int b = ip2, int c = ip3);
int multiplication4(int a = 4, int b = 5, int c = 6);

int maximum(int a, int b);
float maximum(float a, float b);
double maximum(double a, double b);

int maximum(int a, int b, int c);
int maximum(int a, int b, int c, int d);

class Test {
public:

	int Num; // Переменная целого типа
	Test(int i){ Num = i; }; //  Конструктор с параметром
	Test & operator ++() { Num++; return *this; };  // Префиксная операция
	Test & operator --() { Num--; return *this; };

	Test  operator --(int NotUsed) {  // Постфиксная операция
		Test  temp = *this; //  Здесь работает конструктор копирования
		Num--; 
		return temp;
	}; 

};

class Point {
public: 

	int x;
	int y;

	Point(int dx, int dy) {
		x = dx;
		y = dy;
	}

	void print() {
		cout << "Point(" << x << ", " << y << ")";
	}

	Point operator ++() { 
		
		this->x++;
		this->y++;
		
		return *this;
	}; 
	Point operator --();

	Point operator +(Point &point) {
		
		Point newPoint = *this;

		newPoint.x = this->x + point.x;	
		newPoint.y = this->y + point.y;	

		return newPoint;
	};
	Point operator -(Point &point);

	friend istream & operator >> (istream &in, Point &obj);

	bool operator ==(Point point) { 
		
		return ((this->x == point.x) && (this->y == point.y));
	}; 
};

Point Point::operator --() { 
		
	this->x--;
	this->y--;
		
	return *this;
}; 

Point Point::operator -(Point &point) {
		
	Point newPoint = *this;

	newPoint.x = this->x - point.x;	
	newPoint.y = this->y - point.y;	

	return newPoint;
};

class Point1 {
public: 

	int x;
	int y;

	Point1(int dx, int dy) {
		x = dx;
		y = dy;
	}

	void print() {
		cout << "Point(" << x << ", " << y << ")";
	}

	friend Point1 &operator --(Point1 &point);
	friend Point1 &operator *(Point1 &point1, int iVar);
};

Point1 &operator --(Point1 &point) {

	point.x--;
	point.y--;

	return point;
}

Point1 &operator *(Point1 &point1, int iVar) {

	Point1 *point = new Point1(point1.x*iVar, point1.y*iVar);

	return *point;
}

istream & operator >> (istream &in , Point &obj){

	cout << "Point: " << endl;
	cout << "\tx: ";
	in >> obj.x;
	cout << "\ty: ";
	in >> obj.y;
	return in;
};

class Mas {
public:

	int Var[20];
	int Nmax;
	
	Mas( int * pMas , int Razm) { 
		Nmax = Razm;   
		for (int i = 0 ; i < Razm ; i++) Var[i] = pMas[i];    
	};
	
	int operator [](int k) { 
		return Var[k]; 
	};  

};

class ChildPoint: Point
{
public:
	
	ChildPoint(int dx, int dy):Point(dx, dy) {
		//
	}

	ChildPoint operator ++() { 
		
		cout << "dddd" << endl;

		this->x++;
		this->y++;
		
		return *this;
	}; 

	void print() {
		cout << "Point(" << x << ", " << y << ")";
	}

};
