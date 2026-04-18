#pragma once
#include <iostream>
#include <string>
using namespace std;

class Chart {
	string t;
	double total = 0.0;
public:
	int getNumofcolor() {
		return 3;
	}
	Chart(string title);
	~Chart();
	string getcolor(int i);
	void draw();
	void add(int i, int count); 
	int data[3];
	double result = 0.0;
};
