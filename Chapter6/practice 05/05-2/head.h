#pragma once
#include <iostream>
#include <string>
using namespace std;

class Vector {
	int* mem;
	int size;
public:

	Vector(int i = 5, int j = 0) {
		mem = new int[i];
		for (int n = 0; n < i; n++) {
			mem[n] = j;
		}
		size = i;
	}
	
	void show(int n = -1) {  // 아무것도 안들어올때는 -1로 처리하기
		if (n == -1) {   // n이 -1이라면 n에 size 대입
			n = size;
		}
		for (int i = 0; i < n; i++) {
			cout << mem[i] << " ";
		}
		cout << endl;
	}
};
