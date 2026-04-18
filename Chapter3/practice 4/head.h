#pragma once
#include<iostream>
using namespace std;

class Cube {
public:
	Cube(int x, int y, int z);
	bool isZero();
	int getVolume();
	void increase(int a, int b, int c);
	int width;
	int height;
	int depth;
};
