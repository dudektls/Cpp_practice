#include <string>
#include<iostream>
using namespace std;

int main() {
    string t;
    cout << "빈칸없이문자열을입력하세요>>";
    cin >> t;

    int n = t.length();  // length()말고도 size() 써도되는데 그냥 length()쓰는게 나음
    for (int i = 0; i < n; i++) {
        cout << t[i] << " ";
    }

    return 0;
}
