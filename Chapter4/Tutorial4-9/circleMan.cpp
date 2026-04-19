#include "circleMan.h"
#include <string>
#include <iostream>
using namespace std;

circleMan::circleMan() {
	cout << "생성하고자 하는 원의 개수 : ";
	cin >> size;
	if (size <= 0) {
		return ;
	}
	pArray = new circle[size];
}

circleMan::~circleMan() {
	delete[] pArray;	
}
void circleMan::input() {  
	int rad;
	for (int i = 0; i < size; i++) {
		cout << "원" << i + 1 << ": ";
		cin >> rad;
		pArray[i].setRad(rad);
	}
}

void circleMan::decide() {
	int count = 0;
	circle* p = pArray;
	for (int i = 0; i < size; i++) {
		cout << (*p).getArea() << ' ';
		if((*p).getArea() >=100 && (*p).getArea() <= 200) {
			count++;
		}
		p++;
	}
	cout << endl << "면적이 100 이상 200 이하인 원의 개수 : " << count << endl;
}

void circleMan :: run() {
	input();
	decide();
}
