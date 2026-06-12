#include <iostream>
#include <string>
using namespace std;

#include "head.h"

int main() {
	Mystack a(10);
	a.push(10);
	a.push(20);

	Mystack b = a;
	b.push(30);
	int n;
	a.pop(n);
	cout << "스택 a에서 팝한 값" << n << endl;
	b.pop(n);
	cout << "스택 b에서 팝한 값" << n << endl;
}
