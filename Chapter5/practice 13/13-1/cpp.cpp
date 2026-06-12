#include <iostream>
#include <string>
#include "head.h"
using namespace std;

collector::collector(int size, int value[]) {
	this->p = new int[size];
	for (int i = 0; i < size; i++) {
		this->p = value;
	}
	this->size = size;
}
void collector::show() {
	cout << "데이터 수 " << size << " : ";
	for (int i = 0; i < size; i++) {
		cout << p[i] << " ";
	}
	cout << endl;
}
