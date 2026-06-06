#include <iostream>
#include <string>
#include "Act.h"
using namespace std;

Act::Act(string type) {  // 활동 종류에 따른 친밀도 에너지 조정


	if (type == "산책") {
		EnergyOff = 40;
		LoveOn = 30;
	}
	else if (type == "놀이") {
		EnergyOff = 70;
		LoveOn = 70;
	}
	else if (type == "씻기") {
		EnergyOff = 10;
		LoveOn = 30;
	}
	else if (type == "자기") {
		EnergyOff = 0;
		LoveOn = 25;
	}
}

int Act::disEnergy() {  // 먹이를 먹어서 에너지를 얻음
	return EnergyOff;
}
int Act::getLove() {  // 먹이를 먹어서 친밀도를 얻음
	return LoveOn;
}
