#define _USE_MATH_DEFINES
#include "my_sqr.h"

My_sqr::My_sqr(int _x1, int _y1, int _x2, int _y2, int _x3, int _y3, int _x4, int _y4) {
	std::vector<std::vector<int>> xyz2(2, std::vector<int>(xyz_size));
	int a = 0, b = 0;
	xyz2[0][0] = _x1; xyz2[1][0] = _y1;
	xyz2[0][1] = _x2; xyz2[1][1] = _y2;
	xyz2[0][2] = _x3; xyz2[1][2] = _y3;
	xyz2[0][3] = _x4; xyz2[1][3] = _y4;
	xyz = xyz2;
	sides_figure(a, b, xyz[0][0], xyz[0][1], xyz[1][0], xyz[1][1]); // стороны фигуры
	square = a * b; // считаем площадь фигуры
}

void My_sqr::scaleX(int a)
{
	scaleXYZ(0, a, xyz_size);
}
void My_sqr::scaleY(int d)
{
	scaleXYZ(1, d, xyz_size);
}

void My_sqr::scaleZ(int e)
{
	scaleXYZ(2, e, xyz_size);
}