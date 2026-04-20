#pragma once
#include <iostream>
#include <string>
using namespace std;

class Color {
	int r, g, b;
public:
	Color(int r, int g, int b) {
		this->r = r; this->g = g; this->b = b;
	}
	void get(int& r, int& g, int& b) {
		r = this->r; g = this->g; b = this->b;
	}
};
