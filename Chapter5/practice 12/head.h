#pragma once
#include <iostream>
#include <string>
using namespace std;

class mypipe {
	int size = 0;  // 배열 크기
	int putIndex = 0;  // 다음저장될 인덱스 초기 0  
	int* p;  // 배열 가르키는 포인터
public:
	mypipe();
	mypipe(int size);
	mypipe(const mypipe& src);
	~mypipe();
	bool put(int n);  // 원소 넣기
	bool get(int& n);  // 맨 앞 인덱스에 있는 원소 가져오기
	int getsize() {  // 파이프에 저장된 원소의 갯수 
		return putIndex;
	}
};
