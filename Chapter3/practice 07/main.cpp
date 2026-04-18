#include "head.h"
#include <string>
#include<iostream>
using namespace std;

int main() {
	storage a;
	a.put(36.7);
	a.put(36.9);
	a.put(36.4);
	a.dump();
	cout << "평균 체온은 " << a.getAvg() << "입니다. " << endl;
}
