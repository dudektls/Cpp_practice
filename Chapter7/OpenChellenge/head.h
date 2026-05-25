#pragma once
#include <iostream>
#include <string>
using namespace std;

class histogram {
	string str;  // 저장할 문자열
public:
	histogram(string str) {  // 처음 들어온 문자열 저장
		this->str = str;
	}
	histogram& operator << (string str) {  // 문자열을 뒤에 추가
		this->str += str;
		return *this;
	}
	histogram& operator << (char c) {  // 문자 하나를 뒤에 추가 
		this->str += c;
		return *this;
	}
	void operator !();  // 히스토그램 그리기
};
