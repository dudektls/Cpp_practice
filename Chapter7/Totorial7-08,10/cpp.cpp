#include <iostream>
#include<string>
#include "head.h"
using namespace std;


void power::show() {
	cout << "kick : " << kick << ',' << "punch : " << punch << endl;
}

power& power::operator++() {
	kick++;
	punch++;
	return *this;
}
power& power::operator++(int x) {
	power tmp = *this;
	kick++;
	punch++;
	return tmp;
}
