#include <iostream>
#include<string>
#include "head.h"
using namespace std;

int main() {

	coffee black(2, 5, 0, 0), dabang(2, 2, 2, 2);
	black += dabang;
	black += 1;
	black++;
	black.show();

	return 0;
}
