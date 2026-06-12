#include <iostream>
#include <string>
#include "head.h"
using namespace std;

collector::collector(int size, int value[]) {
	this->size = size;
	this->p = new int[size];
	for (int i = 0; i < size; i++) {
		this->p[i] = value[i];
	}
	
}
void collector::show() {
	cout << "데이터 수 " << size << " : ";
	for (int i = 0; i < size; i++) {
		cout << p[i] << " ";
	}
	cout << endl;
}
collector::collector(const collector& src) {  // 복사생성자 
	this->size = src.size;
	this->p = new int[src.size];
	for (int i = 0; i < src.size; i++) {
		this->p[i] = src.p[i];
	}
} 
