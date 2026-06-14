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
	bool operator==(power op2);

};
