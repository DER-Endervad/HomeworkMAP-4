#define _USE_MATH_DEFINES
#include "my_circle.h"
#include<cmath>

My_circle::My_circle(int _x1, int _y1, double R)
{
	x1 = _x1; y1 = _y1;
	radius = R;
	square = M_PI * R * R;
	volume = 0;
}