#include <iostream>
#include<string>
#include "head.h"
using namespace std;

int main() {
	power a(3, 5), b(3, 5);
	a.show();
	b.show();
	if (a == b) {
		cout << "Equal" << endl;
	}
	else 
		cout << "Not Equal" << endl;
	return 0;
}
