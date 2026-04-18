#include "head.h"
#include <string>
#include<iostream>
using namespace std;

int main() {
	Account a("황수희");
	a.deposit(20000);
	cout << a.getOwner() << " 잔액은 " << a.inquiry() << endl;
	int money = a.withdraw(15000);
	cout << money << "원 출금, ";
	cout << a.getOwner() << " 잔액은 " << a.inquiry() << endl;
	money = a.withdraw(8000);
	cout << money << "원 출금, ";
	cout << a.getOwner() << " 잔액은 " << a.inquiry() << endl;
}
