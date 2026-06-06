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
	void eat(string type);
	void act(string type);
};
