#include <iostream>
#include <string>
using namespace std;

class bubble {
	int rad = 0;
public:
	bubble(int n) {
		rad = n;
	}
	int getRad() {
		return rad;
	}
	void setRad(int n) {
		rad = n;
	}

};
