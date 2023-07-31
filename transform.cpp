#include "transform.h"

transform::transform(const Shape& sh)
{
	shape = sh;
}

Shape transform::shift(int m, int n, int k)
{
	switch (shape.getType())
	{
	case Shape::line:
		shape.xyz[0][0] += m; shape.xyz[1][0] += n;
		shape.xyz[0][1] += m; shape.xyz[1][1] += n;
		break;
	case Shape::sqr:
		shape.xyz[0][0] += m; shape.xyz[1][0] += n;
		shape.xyz[0][1] += m; shape.xyz[1][1] += n;
		shape.xyz[0][2] += m; shape.xyz[1][2] += n;
		shape.xyz[0][3] += m; shape.xyz[1][3] += n;
		break;
	case Shape::cube:
		shape.xyz[0][0] += m; shape.xyz[1][0] += n; shape.xyz[2][0] += k;
		shape.xyz[0][1] += m; shape.xyz[1][1] += n; shape.xyz[2][1] += k;
		shape.xyz[0][2] += m; shape.xyz[1][2] += n; shape.xyz[2][2] += k;
		shape.xyz[0][3] += m; shape.xyz[1][3] += n; shape.xyz[2][3] += k;
		shape.xyz[0][4] += m; shape.xyz[1][4] += n; shape.xyz[2][4] += k;
		shape.xyz[0][5] += m; shape.xyz[1][5] += n; shape.xyz[2][5] += k;
		shape.xyz[0][6] += m; shape.xyz[1][6] += n; shape.xyz[2][6] += k;
		shape.xyz[0][7] += m; shape.xyz[1][7] += n; shape.xyz[2][7] += k;
		break;
	}
	return shape;
}

Shape transform::scaleX(int a)
{
	scaleXYZ(0, a);
	return shape;
}

Shape transform::scaleY(int d)
{
	scaleXYZ(1, d);
	return shape;
}

Shape transform::scaleZ(int e)
{
	scaleXYZ(2, e);
	return shape;
}

Shape transform::scaleXYZ(const int xyz, const int i) {

	switch (shape.getType())
	{
	case Shape::line:
		shape.xyz[xyz][0] *= i;
		shape.xyz[xyz][1] *= i;
		break;
	case Shape::sqr:
		shape.xyz[xyz][0] *= i;
		shape.xyz[xyz][1] *= i;
		shape.xyz[xyz][2] *= i;
		shape.xyz[xyz][3] *= i;
		break;
	case Shape::cube:
		shape.xyz[xyz][0] *= i;
		shape.xyz[xyz][1] *= i;
		shape.xyz[xyz][2] *= i;
		shape.xyz[xyz][3] *= i;
		shape.xyz[xyz][4] *= i;
		shape.xyz[xyz][5] *= i;
		shape.xyz[xyz][6] *= i;
		shape.xyz[xyz][7] *= i;
		break;
	}
	return shape;
}

Shape transform::scale(int s)
{
	switch (shape.getType())
	{
	case Shape::line:
		shape.xyz[0][0] /= s; shape.xyz[1][0] /= s;
		shape.xyz[0][1] /= s; shape.xyz[1][1] /= s;
		break;
	case Shape::sqr:
		shape.xyz[0][0] /= s; shape.xyz[1][0] /= s;
		shape.xyz[0][1] /= s; shape.xyz[1][1] /= s;
		shape.xyz[0][2] /= s; shape.xyz[1][2] /= s;
		shape.xyz[0][3] /= s; shape.xyz[1][3] /= s;
		break;
	case Shape::cube:
		shape.xyz[0][0] /= s; shape.xyz[1][0] /= s; shape.xyz[2][0] /= s;
		shape.xyz[0][1] /= s; shape.xyz[1][1] /= s; shape.xyz[2][1] /= s;
		shape.xyz[0][2] /= s; shape.xyz[1][2] /= s; shape.xyz[2][2] /= s;
		shape.xyz[0][3] /= s; shape.xyz[1][3] /= s; shape.xyz[2][3] /= s;
		shape.xyz[0][4] /= s; shape.xyz[1][4] /= s; shape.xyz[2][4] /= s;
		shape.xyz[0][5] /= s; shape.xyz[1][5] /= s; shape.xyz[2][5] /= s;
		shape.xyz[0][6] /= s; shape.xyz[1][6] /= s; shape.xyz[2][6] /= s;
		shape.xyz[0][7] /= s; shape.xyz[1][7] /= s; shape.xyz[2][7] /= s;
		break;
	}
	return shape;
}
