#pragma once

#include "resource.h"
#include <vector>
#include <iostream>

using namespace std;

class Complex {

public:
	 
	int x;
	int y;

	int count;

	Complex(int dx, int dy, int dcount) {

		x = dx;
		y = dy; 

		count = dcount;
	}

	Complex() {

		x = 0;
		y = 0; 

		count = 0;
	}

};

ostream & operator << (ostream & out, Complex & obj) {

	out  <<"Complex {x = " << obj.x << ", y = " << obj.y << ", count = " << obj.count << "}" ;
	return out;
}

class ABArray : public CArray<Complex> {

public:

	int type;

	ABArray():CArray<Complex>() {

	}

};

ostream & operator << (ostream & out, ABArray & obj) {

	for (int i = 0 ; i < obj.GetCount() ; i++ ) {

        cout << "ABArray[" << i << "] = " << obj[i] << endl;

	}

	return out;
}