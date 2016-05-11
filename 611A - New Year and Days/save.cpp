#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int x;
    string a,b;
    cin >> x;
    cin >> a >> b;
    if (b == "month") {
        if (x == 31) {
            cout << 7 << endl;
        }
        else if (x == 30) {
            cout << 11 << endl;
        }
        else {
            cout << 12 << endl;
        }
    }
    else if (b == "week") {
        if (x == 6 || x == 5) {
            cout << 53 << endl;
        }
        else {
            cout << 52 << endl;
        }
    }
    return 0;
}
