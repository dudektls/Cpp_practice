#pragma once
#include <iostream>
#include <string>
using namespace std;

class Act {
private:
	int EnergyOff = 0;
	int LoveOn = 0;
public:
	//string actType; 
	Act(string type);

	int disEnergy(); 
	int getLove();
	
};
