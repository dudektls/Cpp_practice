#pragma once
#include <iostream>
#include <string>
using namespace std;

class Vector {
	int* mem;
	int size;
public:
	Vector() {
		mem = new int[5];
		for (int i = 0; i < 5; i++) {
			mem[i] = 0;
		}
		size = 5;
	}
	Vector(int i, int j) {
		mem = new int[i];
		for (int n = 0; n < i; n++) {
			mem[n] = j;
		}
		size = i;
	}
	void show() {
		for (int i = 0; i < size; i++) {
			cout << mem[i] << " ";
		}
		cout << endl;
	}
	void show(int n) {
		for (int i = 0; i < 3; i++) {
			cout << mem[i] << " ";
		}
		cout << endl;
	}
};
