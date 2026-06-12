#pragma once
#include <iostream>
#include <string>
using namespace std;

class collector {
	int* p;
	int size = 0;
public:
	collector(int size, int value[]);
	void show();
	int getsize() { return size; }
	int get(int index) { return p[index]; }
};
