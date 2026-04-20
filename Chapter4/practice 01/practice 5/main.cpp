#include "head.h"
#include <string>
#include<iostream>
using namespace std;

int main() {
	Container c(10);
	c.read();
	c.write();
	c.rotate();
	c.write();
	cout << "평균은" << c.avg() << endl;


}
