#include <iostream>
#include<string>
#include "head.h"
using namespace std;


void power::show() {
	cout << "kick : " << kick << ',' << "punch : " << punch << endl;
}
bool power::operator==(power op2) {
	if (kick == op2.kick && punch == op2.punch) {
		return true;
	}
	else
		return false;
}
