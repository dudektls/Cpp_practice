#pragma once
#include <iostream>
#include<string>
using namespace std;

class Point {
protected:
	string name;
	int point = 0;  // 초기 포인트
	int ratio = 0;  // 적립율 
public:
	Point(string name, int ratio = 1) {
		this->name = name; this->ratio = ratio;
	}
	virtual void earn(int pay) = 0;
	virtual void show() = 0;
	int getPoint() {
		return point;
	}
};
