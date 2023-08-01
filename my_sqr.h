#pragma once
#include "myshape.h"

class My_sqr : public Myshape {
private:
	int xyz_size = 4;
public:
	My_sqr(int _x1, int _y1, int _x2, int _y2, int _x3, int _y3, int _x4, int _y4);
	void scaleX(int a);
	void scaleY(int d);
	void scaleZ(int e);
	void shift(int m, int n) { myshift(m, n, xyz_size); }
	void scale(int s) { myscale(s, xyz_size); }
};