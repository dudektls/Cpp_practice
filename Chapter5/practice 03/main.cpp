#include "head.h"
#include <string>
#include<iostream>
using namespace std;

void addbubble(bubble& c, bubble& a, bubble& b) {
	c.setRad(a.getRad() + b.getRad() + c.getRad());
}

int main() {
	bubble a(5), b(10), c(130);
	addbubble(c, a, b);
	cout << "버블 C의 반지름 : " << c.getRad() << endl;
}
