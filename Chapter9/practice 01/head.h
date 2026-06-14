#pragma once
#include <iostream>
#include<string>
using namespace std;

class converter {
private:
	string srcUnit, destUnit;// 단위를 나타내는 문자열 ( 원, 달러 ) 
protected:
	double ratio;  // 환율
	virtual double convert(double src) {  // 원화를 달러로 바꾸는 로직
		return 0.0;
	}
public:
	converter(string sUnit, string dUnit, double ratio) {
		srcUnit = sUnit;
		destUnit = dUnit;
		this->ratio = ratio;
	}
	void run() {
		cout << srcUnit << "을" << destUnit << "로 바꿉니다.";
		cout << srcUnit << "을 입력하세요 >>";
		double src;  // 입력받는 원화
		cin >> src;
		cout << convert(src) << destUnit << "입니다." << endl;
	}
};
