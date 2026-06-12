#pragma once
#include <iostream>
#include <string>
using namespace std;

class Mystack {
	int* p;  // 정수를 저장하 배열의 포인터
	int size = 0;
	int tos = 0;
public:
	Mystack() {
		this->p = new int[10];
		this->size = 10;
	}
	Mystack(int size);
	Mystack(const Mystack& c);
	~Mystack() {
		if (p != nullptr) {
			delete[] p;
		}
	
	}
	bool push(int n);
	bool pop(int& n);
};
