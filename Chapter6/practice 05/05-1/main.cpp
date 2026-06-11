#include <iostream>
#include <string>
using namespace std;

#include "head.h"

int main() {

	Vector x;
	Vector y(10, 8);
	x.show();
	y.show();
	y.show(3);
	return 0;
}
