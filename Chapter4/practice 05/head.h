#pragma once
#include <iostream>
#include <string>
using namespace std;

class Container {
	int* p;
	int size=0;
public:
	Container(int size);
	~Container();
	void read();
	void write();
	void rotate();
	double avg();
};
