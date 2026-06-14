#include <iostream>
#include<string>
#include "head.h"
using namespace std;


bool coffee::operator!() {
	if (sugar == 0) {
		return true;
	}
	else
		return false;
}
bool coffee::operator>(coffee op2) {
	int tmp1 = 0, tmp2 = 0;
	tmp1 = this->water + this->espresso + this->sugar + this->cream;
	tmp2 = op2.water + op2.espresso + op2.sugar + op2.cream;

	if (tmp1 > tmp2) {
		return true;
	}
	else
		return false;
}
