#pragma once
#include <iostream>
#include <string>
#include "circle.h"
using namespace std;

class circleMan {
	circle* pArray = NULL;
	int size=0;
	void input();
	void decide();
public:
	circleMan();
	~circleMan();
	void run();
};
