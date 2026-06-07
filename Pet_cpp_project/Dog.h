#pragma once
#include <iostream>
#include <string>
using namespace std;

#include "Pet.h"
#include "Food.h"
#include "Act.h"

class Dog : public Pet {
	float EnergyValue = 1.0;
	float LoveValue = 1.5;
public:
	Dog(string name,int turn);
	void printStatus();
    void printStatus(int i);
	Dog(const Dog& mother);
	Dog(const Pet& pet);
	void eat(string type);
	int act(string type);
	int getLove(){
		return Love;
	}
	int checkbreeding();
};
