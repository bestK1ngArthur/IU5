#pragma once

#include "resource.h"
#include "atlcoll.h"

using namespace std;

class Bas { // Базовый класс 

public:

	Bas(){ a = 0; ClassType = 0; }; // Конструктор 1 
	Bas(int x){ a = x; ClassType = 0; }; // Конструктор 2  

	int a;
	int ClassType;

};

class Type1 : public Bas { // Производный класс 1 

public:

	Type1(){ Coord = 0; ClassType = 1; }; // Конструктор 1 
	Type1(int x){ Coord = x; ClassType = 1; }; // Конструктор 2 

	void Move(int Delta) { Coord = Coord + Delta; }; // Метод для динамического вызова "+"  
	int Coord;

};

class Type2 : public Bas { // Производный класс 2

public:

	Type2(){ Coord = 0; ClassType = 2; }; // Конструктор 1 
	Type2(int x){ Coord = x; ClassType = 2; }; // Конструктор 2 

	void Move(int Delta) { Coord = Coord - Delta; }; // Метод для динамического вызова  "-" 
	int Coord;

};

///////////////////////////////////////////////////////////////////

class Abstr : public CObject { 

public:

	double dPar;

	Abstr() { dPar = 0; };
	Abstr(double p) { dPar = p; };

	virtual void print()=0;
	virtual ~Abstr(){ cout << "Удаление Abstr" << endl; };

};

class Deriv1 : public Abstr {

public:

	double dDPar;

	Deriv1() { dDPar = 0; };
	Deriv1(double p) { dDPar = p; };

	virtual void print() {
	
		cout << "Deriv1(" << dDPar << ")";

	};

	virtual ~Deriv1(){ cout << "Удаление Deriv1" << endl; };

};

class Deriv2 : public Deriv1 {

public:

	Deriv2():Deriv1() {};
	Deriv2(double p):Deriv1(p) {};

	virtual void print() {

		cout << "Deriv2(" << dDPar << ")";

	};

	virtual ~Deriv2(){ cout << "Удаление Deriv2" << endl; };

};

class Deriv3 : public Deriv2 {

public:

	Deriv3():Deriv2() {};
	Deriv3(double p):Deriv2(p) {};

	void print() {

		cout << "Deriv3(" << dDPar << ")";

	};

	virtual ~Deriv3(){ cout << "Удаление Deriv3" << endl; };

};

////////////////////////////////////////////////////////////////////

class Y {

public:

	Y(){ a = 0; };
	Y(double x) { a = x; };
	double a;

};

class U : virtual public Y {

public:

	U(){ b = 0; };
	U(double x, double y) : Y(y) { b = x; };
	double b;

};

class Z : virtual public Y {
public:

	Z(){ c = 0; };
	Z(double x, double y) : Y(y) { c = x; };
	double c;
};

class X : public U, public Z {
public:

	X(double x, double y, double z, double q) : Y(x), U(y, x), Z(z, x) { d = q; };
	double d;

};
