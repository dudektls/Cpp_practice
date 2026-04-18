#pragma once
#include<iostream>
using namespace std;

class Coffee {
public:
	Coffee();
	Coffee(int a, int b, int c, int d);
	void show();
	int coffee;
	int sugar;
	int milk;
	int water;
};
