#include "head.h"
#include <string>
#include<iostream>
using namespace std;

int main() {
	Coffee espresso;
	Coffee americano(5, 0, 0, 10);
	Coffee cappucchino(5, 1, 5, 2);
	Coffee mySweet(3, 7, 5, 5);

	espresso.show();
	cout << endl;
	mySweet.show();
}
