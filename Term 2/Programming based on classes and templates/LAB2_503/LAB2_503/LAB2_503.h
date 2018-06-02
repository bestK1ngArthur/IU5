#pragma once

#include "resource.h"

class Rect {
public:

	int x, y, width, height;

	Rect() {

		x = 0; 
		y = 0;

		width = 0;
		height = 0;

	};

	Rect(int dx, int dy, int dwidth, int dheight) {

		x = dx;
		y = dy;

		width = dwidth;
		height = dheight;

	};

};