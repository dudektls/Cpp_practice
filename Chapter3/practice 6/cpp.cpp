#include "head.h"
#include <string>
#include<iostream>
using namespace std;

Memo::Memo(string a, string b) {
	date = a;
	content = b;
}
string Memo::getDate() {
	return date;
}
string Memo::getContent() {
	return content;
}
bool Memo::isSameDate(Memo b) {
	if (date == b.date)
		return true;
	else
		return false;
}
void Memo::show() {
	cout << date << ", " << content << endl;
}
