#include "Pet.h"
#include "Dog.h"
#include "Act.h"
#include "Food.h"

#include <iostream>
#include <string>
using namespace std;

Dog::Dog(string name) : Pet(name, "강아지") {

}
void Dog::eat(Food* food) {
	cout << petName << "(이)가 " << food->foodType << "을 먹습니다." << endl;
	int Energy = food->getEnergy;
	printStatus();
}

void Dog::act(Act* act) {
	cout << petName << "(이)가 " << act->actType << "을 합니다." << endl;
	int Love = act->getLove + 20;
	printStatus();
}
