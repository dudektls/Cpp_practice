#include "head.h"
#include <string>
#include<iostream>
using namespace std;

Pipe::Pipe() {
	index = 0;
	for (int i = 0; i < 10; i++) {
		data[i] = 0;
	}
}

int Pipe::arrive(int n) {
	if (index == 10) {  
		int front = data[0];
		for (int i = 0; i < 9; i++) {
			data[i] = data[i + 1];
		}
		data[9] = n;
		return front;
	}
	else {
		data[index++] = n;
	}
	return -1;
}
int Pipe::shift() {

	int result = data[0];
	for (int i = 0; i < 9; i++) {
		data[i] = data[i + 1];
		
	}
	data[9] = 0;
	return result;
}
void Pipe::show() {

	cout << "[" << data[0];
	for (int i = 1; i < 10; i++) {
		cout <<" " << data[i];
	}
	cout << "]"<<endl;
}

