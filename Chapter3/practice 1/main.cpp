#include "head.h"
#include <string>
#include<iostream>
using namespace std;

int main() {
	picture pic;
	picture mt(10, 14, "한라산");
	cout << pic.getwidth() << "x" << pic.getHeight() << " " << pic.getlogic() << endl;
	cout << mt.getwidth() << "x" << mt.getHeight() << " " << mt.getlogic() << endl;
}
