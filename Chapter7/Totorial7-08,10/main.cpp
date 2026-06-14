#include <iostream>
#include<string>
#include "head.h"
using namespace std;

int main() {
	power a(3, 5), b;
	a.show();
	b.show();
	b = ++a;  // 전위 연산자
	a.show();
	b.show();
	b = a++;  // 후위 연산자
	a.show();
	b.show();
	return 0;
}
