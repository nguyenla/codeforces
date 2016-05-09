#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string num;
    cin >> num;
    int l = num.size();
    int first = 1;
    for (int i = 0; i < l; ++i) {
        int x = num.at(i) - '0';
        int y = 9 - x;
        char c = '0' + y;
        if (c == '0' && first) {
            cout << num.at(i);
        }
        else if (y < x) {
            cout << c;
        }
        else {
            cout << num.at(i);
        }
        first = 0;
    }
    cout << endl;
    return 0;
}
