#include <iostream>
#include<string>
#include "head.h"
using namespace std;

int main() {
	power a(1, 2);
	a << 3 << 5 << 6;
	a.show();
	return 0;
}
