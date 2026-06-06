#pragma once
#include <iostream>
#include <string>
using namespace std;

class Food {
private:
	int EnergyOn=0;
	int LoveOn=0;
public:
	//string FoodType;// 일반먹이 프리미엄먹이 간식중 종류의 이름이 들어간 변수
	Food(string type);

	int getEnergy();  // 먹이를 먹어서 에너지와 친밀도를 얻는 함수
	int getLove();
	
};
