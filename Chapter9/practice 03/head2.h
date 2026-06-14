#pragma once
#include <iostream>
#include <string>
#include "head.h"
using namespace std;

class silver : public Point {
public:
	virtual void earn(int pay);
	virtual void show();
	silver(string name, int ratio = 3);
};
