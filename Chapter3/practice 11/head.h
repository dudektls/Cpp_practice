#pragma once
#include<iostream>
using namespace std;

class oval {
	int width;
	int height;
public:
	oval();
	oval(int x, int y);
	~oval();
	int getwidth() {
		return width;
	}
	int getheight() {
		return height;
	}
	void set(int w, int h);
	void show();
	double area();
};
