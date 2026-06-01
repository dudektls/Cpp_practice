#include <string>
#include <iostream>
using namespace std;
#include "Act.h"

Act::Act(string actType) {  // 종류에 따른 에너지와 친밀도 식

	this->actType = actType;

	if (actType == "가벼운 산책") {
		getLove = 20;
		disEnergy = 20;
	}
	else if (actType == "격렬한 놀이") {
		getLove = 50;
		disEnergy = 40;
	}
	else if (actType == "씻기") {
		getLove = 30;
		disEnergy = 15;
	}
	else if (actType == "자기") {
		getLove = 10;
		getEnergy = 40;
	}
}
