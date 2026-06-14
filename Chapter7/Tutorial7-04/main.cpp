#include <iostream>
#include<string>
#include "head.h"
using namespace std;

int main() {
	power a(3, 5), b(4, 6), c;
	c = a + b;
	a.show();
	b.show();
	c.show();
	return 0;
}
