#include "head.h"
#include <string>
#include<iostream>
using namespace std;

bool equals(string a, string b) {
	if (a.substr(0) == b.substr(0)) {
		return true;
	}
	else
		return false;
}
bool equals(string a, string b, int n) {
	if (a.substr(0, n) == b.substr(0, n)) {
		return true;
	}
	else
		return false;
}
bool equals(string a, string b, int n, string c) {
	if (a.substr(0, n) == b.substr(0, n) && a.substr(0, n) == c.substr(0, n)) {
		return true;
	}
	else
		return false;
}

int main() {
	string x = "Prof. Hwang";
	string y = "Prof. Kim";
	string z = "Prof. Lee";
	if (equals(x, y)) cout << "같음" << endl;
	if (equals(x, y, 3)) cout << "앞 3글자 같음" << endl;
	if (equals(x, y, 5, z)) cout << "앞 5글자 같음" << endl;
}
