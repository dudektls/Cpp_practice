#pragma once
#include <string>
#include <iostream>
using namespace std;

class Food {
public:
	string foodType;  //먹는 음식 종류
	int getEnergy;  //얻는 에너지 양
	int getLove;  // 얻는 친밀도 양

	Food(string foodType);
};
