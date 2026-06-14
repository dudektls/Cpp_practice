#include <iostream>
#include<string>
#include "head.h"
using namespace std;


void power::show() {
	cout << "kick : " << kick << ',' << "punch : " << punch << endl;
}

power& power::operator<<(int n) {
	kick += n;
	punch += n;
	return *this;
}
