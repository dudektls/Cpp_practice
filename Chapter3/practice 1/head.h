#pragma once
#include<iostream>
using namespace std;

class picture {
public:
	int width;
	int height;
	picture();
	picture(int a, int b, string c);
	string logic;
	int getHeight();
	int getwidth();
	string getlogic();

};
