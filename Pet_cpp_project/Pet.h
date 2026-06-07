#pragma once
#include<iostream>
#include<string>
#include "Food.h"
#include "Act.h"
using namespace std;

class Pet {
private:
	string petType;
protected:
	int Energy = 70;
	int Love = 0;

public:
	string petName;
	int RunTurn = 0;
	
	Pet(string name,int Turn) {  //디폴트 매개변수 생성자
		petName = name;
		RunTurn = Turn;
	}
	virtual void eat(string type) {}  //먹이 먹는 메서드
	virtual int act(string type) { return 0; }  // 활동하는 메서드
	virtual int getLove() { return 0; }
	virtual int checkbreeding() { return 1; }
	virtual void printStatus() {};   // 활동하면서 실시간으로 변화할 스탯창 
	virtual void printStatus(int i) {}; // 하루 마무리하면서 출력할 최후 스탯창
};
