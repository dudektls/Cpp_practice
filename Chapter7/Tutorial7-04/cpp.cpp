#include <iostream>
#include<string>
#include "head.h"
using namespace std;


void power::show() {
	cout << "kick : " << kick << ',' << "punch : " << punch << endl;
}
power power::operator+(power op2) {
	power tmp;
	tmp.kick = this->kick + op2.kick;
	tmp.punch = this->punch + op2.punch;
	return tmp;
}
