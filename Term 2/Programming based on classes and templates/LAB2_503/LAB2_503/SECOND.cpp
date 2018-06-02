
#include "stdafx.h"
#include "LAB2_503.h"
#include <iostream>
#include <string>

using namespace std;

int iSecond = 15;

char * Spravka(void) {

	return "Белков Артём, группа ИУ5-23, Вариант по списку №3";
}

char * Cat(char *str1, char *str2) {

	strcat_s(str1, 10, str2);

	return str1;
}

void printRect(Rect *rect) {

	cout << "Rect (x:" << rect->x << ", y:" << rect->y << ", width:" << rect->width << ", height:" << rect->height << ")" << endl;

}

void getRect(Rect *rect) {

	cout << "Rect" << endl << "x:\t";
	cin >> rect->x;
	cout << "y:\t";
	cin >> rect->y;
	cout << "width:\t";
	cin >> rect->width;
	cout << "height:\t";
	cin >> rect->height;

}