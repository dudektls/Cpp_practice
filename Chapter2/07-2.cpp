#include <string>
#include<iostream>
using namespace std;

int main() {
    string a;
    string b;

    cout << "문자열을 입력하시오>>";
    cin >> a;
    cout << "문자열을 입력하시오>>";
    cin >> b;

    if (a == b) {
        cout << "Yes";
    }
    else
        cout << "NO";
    return 0;
}
