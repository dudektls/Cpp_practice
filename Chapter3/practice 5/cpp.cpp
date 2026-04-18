#include "head.h"
#include <string>
#include<iostream>
using namespace std;

CoffeeMachine::CoffeeMachine(int a, int b, int c) {
	coffee = a;
	water = b;
	sugar = c;
}
void CoffeeMachine::drinkEspresso() {
	coffee -= 1;
	water -= 1;
}
void CoffeeMachine::drinkAmericano() {
	coffee -= 1;
	water -= 2;
}
void CoffeeMachine::drinkSugarCoffee() {
	coffee -= 1;
	water -= 2;
	sugar -= 1;
}
void CoffeeMachine::fill() {
	coffee = 10;
	water = 10;
	sugar = 10;
}
void CoffeeMachine::show() {
	cout << "[머신상태] 커피:" << coffee << " 물: " << water << " 설탕: " << sugar << endl;
}
