#pragma once
#include<iostream>
using namespace std;

class storage {
	int next = 0;
	double data[10];
	double result = 0;
public:
	//storage();
	//storage(double);
	void put(double);
	double getAvg();
	void dump();
	
};
