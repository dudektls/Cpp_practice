#include <iostream>
#include <string>
using namespace std;

#include "head.h"

int main() {
	GameBoard board;
	board.increase();  
	board.increase(20);
	board.increase(30, "청군");
	board.increase(40, "백군");
	board.show();
	board.show("청군");
}
