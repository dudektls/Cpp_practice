#include "circle.h"
#include "circleMan.h"
#include <string>
#include<iostream>
using namespace std;

int main() {
  
	circleMan* pMan = new circleMan();
	(*pMan).run();
	delete pMan;
  
}
