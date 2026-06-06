#include <iostream>
#include <string>
#include "Food.h"
using namespace std;

Food::Food(string type) {  // 먹이 종류에 따른 친밀도 에너지 조정


	if (type == "일반먹이") {
		EnergyOn = 30;
		LoveOn = 20;
	}
	else if (type == "프리미엄먹이") {
		EnergyOn = 50;
		LoveOn = 70;
	}
	else if (type == "간식") {
		EnergyOn = 20;
		LoveOn = 30;
	}
}

int Food::getEnergy() {  // 먹이를 먹어서 에너지를 얻음
	return EnergyOn;
}
int Food::getLove() {  // 먹이를 먹어서 친밀도를 얻음
	return LoveOn;
}
