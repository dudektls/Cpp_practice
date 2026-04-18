#include "head.h"
#include <string>
#include<iostream>
using namespace std;

int main() {
	calculator jane;
	jane.loop();
	cout << "연산 결과는 " << jane.getValue() << endl;
}
