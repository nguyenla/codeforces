#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> sticks;
    int x;
    for (int i = 0; i < 6; ++i) {
        cin >> x;
        sticks.push_back(x);
    }
    sort(sticks.begin(), sticks.end());
    int a = sticks.at(0);
    int b = sticks.at(1);
    int c = sticks.at(2);
    int d = sticks.at(3);
    int e = sticks.at(4);
    int f = sticks.at(5);
    if (a== b&& b==c && c==d) {
        if (e ==f) {
            cout << "Elephant" << endl;
        }
        else {
            cout << "Bear" << endl;
        }
    }
    else if (b == c && c == d && d == e) {
        if (a ==f) {
            cout << "Elephant" << endl;
        }
        else {
            cout << "Bear" << endl;
        }
    }
    else if (c == d && d == e && e == f) {
        if (a ==b) {
            cout << "Elephant" << endl;
        }
        else {
            cout << "Bear" << endl;
        }
    }
    else {
        cout << "Alien" << endl;
    }
    return 0;
}
