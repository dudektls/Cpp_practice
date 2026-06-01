#pragma once
#include "Pet.h"
#include "Food.h"
#include "Act.h"
#include <iostream>

class Dog : public Pet {
public:
	Dog(string name);

	void eat(Food* food);
	void act(Act* act);
};
