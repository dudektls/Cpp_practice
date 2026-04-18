#include "head.h"
#include <string>
#include<iostream>
using namespace std;


int picture::getHeight() {
	return height;
}
int picture::getwidth() {
	return width;
}
picture::picture() {
	width = 5;
	height = 7;
	logic = "모름";
}
picture::picture(int a, int b, string c) {
	width = a;
	height = b;
	logic = c;
}
string picture::getlogic() {
	return logic;
}
