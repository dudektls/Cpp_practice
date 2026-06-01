#pragma once
#include <string>
#include <iostream>
using namespace std;

class Act {
public:
	string actType;  //활동 종류
	int getLove=0;   // 얻는 친밀도
	int disEnergy=0;  // 잃는 에너지
	int getEnergy=0;  // 잘때 얻는 에너지

	Act(string acttype);
};
