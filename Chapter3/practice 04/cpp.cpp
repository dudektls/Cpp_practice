#include "head.h"
#include <string>
#include<iostream>
using namespace std;

Cube::Cube(int x, int y, int z) {
	width = x;
	height = y;
	depth = z;
}
int Cube::getVolume() {
	return width * height * depth;
}
void Cube::increase(int a, int b, int c) {
	width += a;
	height += b;
	depth += c;
}
bool Cube::isZero() {
	if (getVolume() == 0)
		return true;
	else
		return false;
}
