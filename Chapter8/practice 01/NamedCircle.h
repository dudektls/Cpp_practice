#pragma once
#include <iostream>
#include<string>
#include "head.h"
using namespace std;

class NamedCircle : Circle {
public:
	int rad = 0;
	string name;
	NamedCircle(int n, string text) {
		rad = n;
		name = text;
	}
	void show() {
		cout << "반지름이 " << rad << "인 " << name << endl;
	}
};
