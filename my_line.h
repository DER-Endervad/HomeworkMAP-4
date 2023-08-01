#pragma once
#include "myshape.h"

class My_line : public Myshape {
private:
	int xyz_size = 2;
public:
	My_line(int _x1, int _y1, int _x2, int _y2);
	void scaleX(int a);
	void scaleY(int d);
	void scaleZ(int e);
	void shift(int m, int n) { myshift(m, n, xyz_size); }
	void scale(int s) { myscale(s, xyz_size); }
};