#include "head.h"
#include <string>
#include <iostream>
using namespace std;

Container::Container(int size) {
	this->size = size;
	p = new int[size]; 
	
}

Container::~Container() {
	delete[] p;
}

void Container::read() {
	cout << "정수 " << size << "개 입력>>";
	for (int i = 0; i < size; i++)
		cin >> p[i];
}

void Container::write() {
	for (int i = 0; i < size; i++)
		cout << p[i] << ' ';
	cout << endl;
}

double Container::avg() {
	if (size == 0)
		return 0;

	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += p[i];

	return (double)sum / size;
}

void Container::rotate() {
	if (size == 0)
		return;
	int last = p[size - 1]; 
	for (int i = 0; i < size - 1; i++) 
		p[size - 1 - i] = p[size - 2 - i];

	p[0] = last; 
}
