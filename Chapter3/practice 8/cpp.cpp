#include "head.h"
#include <string>
#include<iostream>
using namespace std;

calculator::calculator() {
	value = 0;
}
void calculator::loop() {
	string op;
	int num;
	while (1) {
		cout << "연산 입력 >>";
		cin >> op;
		if (op == "그만") {
			return;
		}
		cin >> num;
		calc(op, num);
	}
}
void calculator::calc(string op, int num) {

	if (op == "+") {
		value = value + num;
	}
	else if (op == "-") {
		value = value - num;
	}
	else if (op == "*") {
		value = value * num;
	}
	else if (op == "/") {
		value = value / num;
	}
}
int calculator::getValue() {
	return value;
}
