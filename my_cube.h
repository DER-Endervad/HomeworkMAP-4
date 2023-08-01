#pragma once
#include "myshape.h"

class My_cube : public Myshape
{
private:
	int xyz_size = 8;
public:
	My_cube(int _x1, int _y1, int _z1, int _x2, int _y2, int _z2, int _x3, int _y3, int _z3, int _x4, int _y4, int _z4, int _x5, int _y5, int _z5, int _x6, int _y6, int _z6, int _x7, int _y7, int _z7, int _x8, int _y8, int _z8);
	void scaleX(int a);
	void scaleY(int d);
	void scaleZ(int e);
	void shift(int m, int n, int k) { myshift(m, n, k, xyz_size); }
	void scale(int s) { myscale(s, xyz_size); }
};

