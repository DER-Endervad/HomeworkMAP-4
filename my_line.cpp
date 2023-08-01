#define _USE_MATH_DEFINES
#include "my_line.h"

My_line::My_line(int _x1, int _y1, int _x2, int _y2) {
	std::vector<std::vector<int>> xyz2(xyz_size, std::vector<int>(xyz_size));
	xyz2[0][0] = _x1; xyz2[1][0] = _y1;
	xyz2[0][1] = _x2; xyz2[1][1] = _y2;
	xyz = xyz2;
}

void My_line::scaleX(int a)
{
	scaleXYZ(0, a, xyz_size);
}
void My_line::scaleY(int d)
{
	scaleXYZ(1, d, xyz_size);
}

void My_line::scaleZ(int e)
{
	scaleXYZ(2, e, xyz_size);
}