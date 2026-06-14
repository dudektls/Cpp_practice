#include "head.h"
#include <string>
#include <iostream>
using namespace std;

coffee coffee:: operator + (int espresso) {
	coffee tmp = *this;
	tmp.espresso += espresso;
	return tmp;
}
coffee coffee::operator+(coffee c) {
	coffee temp = *this;
	temp.water += c.water;
	temp.espresso += c.espresso;
	temp.sugar += c.sugar;
	temp.cream += c.cream;

	return temp;
}
