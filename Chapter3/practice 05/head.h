#pragma once
#include<iostream>
using namespace std;

class CoffeeMachine {
public:
	CoffeeMachine(int a, int b, int c);
	void drinkEspresso();
	void drinkAmericano();
	void drinkSugarCoffee();
	void fill();
	void show();
	int coffee;
	int water;
	int sugar;
};
