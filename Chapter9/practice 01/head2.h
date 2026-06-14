#pragma once
#include <iostream>
#include <string>
#include "head.h"
using namespace std;

class Won2Dollar : public converter {
public:
	Won2Dollar(string srcUnit, string destUnit, int ratio);
	double convert(double src);
};
