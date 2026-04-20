#include "head.h"
#include <string>
#include<iostream>
using namespace std;

int main() {
	Color fore(255, 0, 0), back(15, 128, 200);
	int r, g, b;
	fore.get(r, g, b);
	cout << "red=" << r << ",green=" << g << ",blue=" << b << endl;
	back.get(r, g, b);
	cout << "red=" << r << ",green=" << g << ",blue=" << b << endl;
}
