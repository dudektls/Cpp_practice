#pragma once
#include <string>
#include <iostream>
using namespace std;

class Pet {
protected:
	string petName; // 펫의 이름
	string petType; // 펫의 종류
	int Energy; // 펫의 에너지 초기값
	int Love; // 펫의 친밀도 초기값
	int Term;// 남은 턴수 
public:
	Pet();
	Pet(string name, string type);
	void printStart();
	void printterm(int totalturn);
	void printStatus();
};
