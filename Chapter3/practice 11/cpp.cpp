#include "head.h"
#include <string>
#include<iostream>
using namespace std;

oval::oval() {
	width = 0;
	height = 0;
}
oval::oval(int x, int y) {
	width = x;
	height = y;
}
void oval::set(int w, int h) {
	width = w;
	height = h;
}
double oval::area() {
	return 3.14 * (width / 2.0) * (height / 2.0);
}
void oval::show() {
	cout <<"Oval: " << "width = " << width <<", " << "height = " << height << endl;
}
oval::~oval() {
	cout << "Oval 소멸: " << width << "x" << height << endl;
}
