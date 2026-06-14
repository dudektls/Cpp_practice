#include <iostream>
#include<string>
#include "head.h"
using namespace std;

int main() {
	int x[] = { 1,10,100,5,4 };
	cout << biggest(x, 5) << endl;
	double y[] = { 3.5,20.7,6.2,5.4 };
	cout << biggest(y, 4) << endl;
}
