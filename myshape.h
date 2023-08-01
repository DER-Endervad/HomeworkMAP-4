#pragma once
#include <iostream>
#include<string>
#include <vector>

class Myshape
{
protected:
	std::vector<std::vector<int>> xyz;
	int xyz_size = 0;
	double volume = 0;
	double square = 0;

	void sides_figure(int& a, int& b, int& c, const int x1, const int x2, const int y1, const int y2, const int z1, const int z2);
	void sides_figure(int& a, int& b, const int x1, const int x2, const int y1, const int y2);

	void scaleXYZ(const int xyz2, const int j, const int new_size);

	void myshift(int m, int n, int new_size);
	void myshift(int m, int n, int k, int new_size);

	void myscale(int s, int new_size);
};

