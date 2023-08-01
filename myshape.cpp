#define _USE_MATH_DEFINES
#include "myshape.h"
#include<cmath>

void Myshape::sides_figure(int& a, int& b, int& c, const int x1, const int x2, const int y1, const int y2, const int z1, const int z2) {
	a = abs(x1 - x2);
	b = abs(y1 - y2);
	c = abs(z1 - z2);
}

void Myshape::sides_figure(int& a, int& b, const int x1, const int x2, const int y1, const int y2) {
	a = abs(x1 - x2);
	b = abs(y1 - y2);
}

void Myshape::scaleXYZ(const int xyz2, const int j, const int new_size) {
	for (int i = 0; i < new_size; ++i) {
		xyz[xyz2][i] *= j;
	}
}

void Myshape::myshift(int m, int n, int new_size)
{
	for (int i = 0; i < new_size; i++) {
		xyz[0][i] += m; xyz[1][i] += n;
	}
}

void Myshape::myshift(int m, int n, int k, int new_size)
{
	for (int i = 0; i < new_size; i++) {
		xyz[0][i] += m; xyz[1][i] += n; xyz[2][i] += k;
	}
}

void Myshape::myscale(int s, int new_size)
{
	if (new_size <= 4) {
		for (int i = 0; i < new_size; i++) {
			xyz[0][i] /= s; xyz[1][i] /= s;
		}
	}
	else {
		for (int i = 0; i < new_size; i++) {
			xyz[0][i] /= s; xyz[1][i] /= s; xyz[2][i] /= s;
		}
	}
}
