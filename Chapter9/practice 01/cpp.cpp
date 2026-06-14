#include <iostream>
#include<string>
#include "head2.h"
using namespace std;


Won2Dollar::Won2Dollar(string srcUnit, string destUnit, int ratio) : converter(srcUnit, destUnit, ratio) {

}

double Won2Dollar::convert(double src) {
	return src * (1.0 / ratio);
}
