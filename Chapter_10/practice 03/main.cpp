#include <iostream>
#include<string>
#include "head.h"
using namespace std;

int main() {
	int x[] = { 3,5,9,7 };
	int y[] = { 3,5,7,9 };
	if (equal(x, y, 4)) {
		cout << "같다" << endl;
	}
	else
		cout << "다르다" << endl;

	char c[] = { 'j','a','v','a' };
	char d[] = { 'j','a','v','A' };
	if (equal(c, d, 3)) {
		cout << "같다" << endl;
	}
	else
		cout << "다르다" << endl;
	return 0;
}
