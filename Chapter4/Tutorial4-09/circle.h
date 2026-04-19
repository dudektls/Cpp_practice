#pragma once
#include <iostream>
#include <string>
using namespace std;

class circle {
	int rad;
public:
	circle(){
		rad = 1;
	}	
	double getArea() {
		return 3.14 * rad * rad;
	}
	~circle() {}
	void setRad(int r) {
		rad = r;
	}

};
