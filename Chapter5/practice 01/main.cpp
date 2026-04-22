#include "head.h"
#include <string>
#include<iostream>
using namespace std;

void twice(int& n) {
	n = n * 2;
}


int main() {
	int n = 12;
	twice(n);
	cout << n;
}
