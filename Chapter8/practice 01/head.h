#pragma once
#include <iostream>
#include<string>
using namespace std;

class Circle {
	int rad;
public:
	Circle(int rad = 0) {
		this->rad = rad;
	}
	int getRad() {
		return rad;
	}
	void setRad(int rad) {
		this->rad = rad;
	}
	double getArea() {
		return 3.14 * rad * rad;
	}
};
