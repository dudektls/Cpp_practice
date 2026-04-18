#pragma once
#include<iostream>
using namespace std;

class Pipe {
	int data[10];
	int index;
public:
	Pipe();
	int arrive(int n);
	int shift();
	void show();

};
