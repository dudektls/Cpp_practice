#include "head.h"
#include <string>
#include<iostream>
using namespace std;

Account::Account(string n) {
	name = n;
	wallet = 0;
}

string Account::getOwner() {
	return name;
}

int Account::deposit(int t) {
	wallet = wallet + t;
	return wallet;
}

int Account::withdraw(int m) {
	if (wallet > m) {
		wallet = wallet - m;
		return m;
	}
	else {
		int all = wallet;
		wallet = 0;
		return all;
	}
}

int Account::inquiry() {
	return wallet;
}
