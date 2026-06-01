#include <string>
#include <iostream>
using namespace std;
#include "Food.h"

Food::Food(string foodType) {
	this->foodType = foodType;

	if (foodType == "일반 사료") {
		getEnergy = 20;
		getLove = 10;
	}
	else if (foodType == "프리미엄 사료") {
		getEnergy = 30;
		getLove = 50;
	}
	else if (foodType == "간식") {
		getEnergy = 10;
		getLove = 20;
	}
}
