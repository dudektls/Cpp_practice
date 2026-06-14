#include "head.h"
#include <string>
#include<iostream>
using namespace std;


int main() {
	coffee black(2, 5, 0, 0), dabang(2, 2, 2, 2), c, d;
	c = black + dabang;
	d = c + 1;
	c.show();
	d.show();
}
