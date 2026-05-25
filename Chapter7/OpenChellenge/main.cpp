#include "head.h"
#include <string>
#include<iostream>
using namespace std;


int main() {
	histogram song("Wise men say, \nonly fools rush in But i can't help, \n");
	song << "falling" << " in love with you." << "- by ";
	song << 'k' << 'i' << 't';
	!song;
}
