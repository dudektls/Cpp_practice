#pragma once
#include <iostream>
#include<string>
using namespace std;

class power {
	int kick;
	int punch;
public:
	power(int kick = 0, int punch = 0) {
		this->kick = kick;
		this->punch = punch;
	}
	void show();
	power& operator++();  // 전위 ++ 연산자
	power& operator++(int x); // 후위 ++ 연산자
};
