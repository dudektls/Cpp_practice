#pragma once
#include <iostream>
#include <string>

class Exp {
public:
	bool equals(Exp b);
	int getValue();
	int getbase();
	int getExp();
	Exp();
	Exp(int a, int b);
	Exp(int c);
	int x, y;


};
