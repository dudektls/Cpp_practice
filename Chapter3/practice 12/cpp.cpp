#include "head.h"
#include <string>
#include <iostream>
using namespace std;

Chart::~Chart() {
    cout << "차트 데이터는 저장되지 않고 사라집니다.";
}
Chart::Chart(string title) {
    t = title;
    for (int i = 0; i < 3; ++i) {
        data[i] = 0;
    }
}
string Chart::getcolor(int i) {
    if (i == 0) {
        return "빨강";
    }
    else if (i == 1) {
        return "파랑";
    }
    else if (i == 2) {
        return "노랑";
    }
    return "";
}

void Chart::add(int i, int count) { 
    total += count;
}

void Chart::draw() {
    cout << t << "**************" << endl;
    for (int i = 0; i < getNumofcolor(); i++) {
		result = ((double)data[i] / total) * 100; 
        cout << getcolor(i) << ": " << result << "%" << endl;
    }
    cout << "*************************" << endl;
}
