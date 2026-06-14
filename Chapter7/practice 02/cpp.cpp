#include <iostream>
#include<string>
#include "head.h"
using namespace std;


coffee& coffee::operator +=(coffee c) {
	this->water += c.water;
	this->espresso += c.espresso;
	this->sugar = c.sugar;
	this->cream = c.cream;
	return *this;
}
coffee& coffee::operator+=(int n) {
	this->espresso += n;
	return *this;
}
coffee& coffee::operator++(int n) {
	this->espresso++;
	return *this;
}
