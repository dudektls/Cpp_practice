#include<iostream>
using namespace std;

int main() {
double x1, y1, x2, y2;
double result;
cout << "사각형의 두 점(x1,y1,x2,y2)을 입력하시오 >>";
cin >> x1 >> y1 >> x2 >> y2;

int a, b;
if (x1 > x2) {
a = x1 - x2;
}
else a = x2 - x1;
if (y1 > y2) {
b = y1 - y2;
}
else b = y2 - y1;
double A = a / 2.0;
double B = b / 2.0;
result = 3.14 * A * B;
cout << "타원의 면적은" << result << "입니다";
return 0;
}
