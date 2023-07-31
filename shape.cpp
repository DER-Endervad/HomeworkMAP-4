#define _USE_MATH_DEFINES
#include"shape.h"
#include<cmath>
Shape::Shape(int _type, int _x1, int _y1, int _z1, int _x2, int _y2, int _z2, int _x3, int _y3, int _z3, int _x4, int _y4, int _z4, int _x5, int _y5, int _z5, int _x6, int _y6, int _z6, int _x7, int _y7, int _z7, int _x8, int _y8, int _z8)
{
	std::vector<std::vector<int>> xyz2(3, std::vector<int>(8));
	xyz2[0][0] = _x1; xyz2[1][0] = _y1; xyz2[2][0] = _z1;
	xyz2[0][1] = _x2; xyz2[1][1] = _y2; xyz2[2][1] = _z2;
	xyz2[0][2] = _x3; xyz2[1][2] = _y3; xyz2[2][2] = _z3;
	xyz2[0][3] = _x4; xyz2[1][3] = _y4; xyz2[2][3] = _z4;
	xyz2[0][4] = _x5; xyz2[1][4] = _y5; xyz2[2][4] = _z5;
	xyz2[0][5] = _x6; xyz2[1][5] = _y6; xyz2[2][5] = _z6;
	xyz2[0][6] = _x7; xyz2[1][6] = _y7; xyz2[2][6] = _z7;
	xyz2[0][7] = _x8; xyz2[1][7] = _y8; xyz2[2][7] = _z8;
	xyz = xyz2;
	type = _type;
	// стороны фигуры
	int a = 0, b = 0, c = 0;
	// заполн¤ем координаты фигуры
	switch (type)
	{
	case line:
		sides_figure(a, b, c, xyz[0][0], xyz[0][1], xyz[1][0], xyz[1][1], xyz[2][0], xyz[2][1]); // стороны фигуры
		square = 0; // считаем площадь фигуры
		volume = 0; // считаем объем фигуры
		break;
	case sqr:
		sides_figure(a, b, c, xyz[0][0], xyz[0][1], xyz[1][0], xyz[1][1], xyz[2][0], xyz[2][1]); // стороны фигуры
		square = a * b; // считаем площадь фигуры
		volume = 0; // считаем объем фигуры
		break;
	case cube:
		sides_figure(a, b, c, xyz[0][0], xyz[0][1], xyz[1][0], xyz[1][1], xyz[2][0], xyz[2][1]); // стороны фигуры
		square = 2 * a * b + 2 * a * c + 2 * b * c; // считаем площадь фигуры
		volume = a * b * c; // считаем объем фигуры
		break;
	default:
		break;
	}

}

void Shape::sides_figure(int& a, int& b, int& c, const int x1, const int x2, const int y1, const int y2, const int z1, const int z2) {
	a = abs(x1 - x2);
	b = abs(y1 - y2);
	c = abs(z1 - z2);
}

//Shape::Shape(int type, int _x1, int _y1, double R, double H)
//{
//	// заполн¤ем координаты фигуры
//	switch (type)
//	{
//	case circle:
//		x1 = _x1; y1 = _y1;
//		radius = R;
//		break;
//	case cylinder:
//		x1 = _x1; y1 = _y1;
//		radius = R;
//		height = H;
//		break;
//	default:
//		break;
//	}
//
//	// считаем площадь фигуры
//	switch (type)
//	{
//	case circle:
//		square = M_PI * R * R;
//		break;
//	case cylinder:
//		square = M_PI * R * R + 2 * R * height;
//		break;
//	default:
//		break;
//	}
//
//	// считаем объем фигуры
//	switch (type)
//	{
//	case circle:
//		volume = 0;
//		break;
//	case cylinder:
//		volume = M_PI * R * R * height;
//		break;
//	default:
//		break;
//	}
//
//}
