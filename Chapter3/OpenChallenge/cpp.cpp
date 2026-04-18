#include "head.h"
#include <iostream>
#include <string>
using namespace std;

Exp::Exp() {
	x = y = 1;
}
Exp::Exp(int a, int b) {
	x = a;
	y = b;
}
Exp::Exp(int c) {
	x = c;
	y = 1;
}
int Exp::getbase() {
	return x;
}
int Exp::getExp() {
	return y;
}
int Exp::getValue() {
	int result = 1;
	for (int i = 0; i < y; i++) {
		result = result * x;
	}
	return result;
}

bool Exp::equals(Exp b) {
	if (getValue()==b.getValue())
		return true;
	else
		return false;
}
