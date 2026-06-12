#include <iostream>
#include <string>
#include "head.h"
using namespace std;

mypipe::mypipe() {
	this->p = new int[10];
	this->size = 10;
 }
mypipe::mypipe(int n) {
	this->p = new int[n];
	this->size = n;

}
mypipe::mypipe(const mypipe& src) {
	this->size = src.size;
	this->p = new int[src.size];
	this->putIndex = src.putIndex;  // 이거를 안하면 a에서 저장된 10과 20이 사라짐.
	for (int i = 0; i < src.putIndex; i++) {
		this->p[i] = src.p[i];
	}
}
bool mypipe::put(int n) {
	if (putIndex >= size) {
		return false;
	}
	else {
		p[putIndex] = n;
		putIndex++;
		return true;
	}
}
bool mypipe::get(int& n) {
	if (putIndex == 0) {
		return false;
	}
	else {
		n = p[0];
		for (int n = 1; n < putIndex; n++) {
			p[n - 1] = p[n];
		}
		putIndex--;
		return true;
	}
}
mypipe::~mypipe(){

	if (p != nullptr) {
		delete[] p;
	}
}
