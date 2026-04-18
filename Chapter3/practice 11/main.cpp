#include "head.h"
#include <string>
#include<iostream>
using namespace std;

int main() {
	oval kitae, jane(10, 15);
	kitae.set(3, 4);
	kitae.show();
	cout << jane.getwidth() << "x" << jane.getheight() << ", 면적 " << jane.area() << endl;

}
