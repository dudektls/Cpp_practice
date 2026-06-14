#pragma once
#include <iostream>
#include<string>
using namespace std;

class coffee {
	int water, espresso, sugar, cream;
public:
	coffee(int water = 1, int coffee = 1, int sugar = 0, int cream = 0) {
		this->water = water;
		this->espresso = coffee;
		this->sugar = sugar;
		this->cream = cream;
	}
	void show() {
		cout << "물 " << water << " , 커피 " << espresso;
		cout << " , 설탕 " << sugar << " , 크림 " << cream << endl;
	}
	coffee& operator += (coffee c);  // 커피 합치기
	coffee& operator +=(int n);  // 에스프레소 1샷 추가
	coffee& operator ++ (int n);
};
