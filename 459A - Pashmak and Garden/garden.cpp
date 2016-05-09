#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int found = 0;
    // opposite vertices
    if (x1 != x2 && y1 != y2) {
        if (abs(x1 - x2) != abs(y1 - y2)) {
            found = 0;
        }
        else {
            cout << x1 << " " << y2 << " " << x2 << " " << y1 << endl;
            found = 1;
        }
    }

    else {
        int x3,y3,x4,y4;
        int l = max(abs(x1-x2),abs(y1-y2));
        if (x1 == x2) {
            y3 = y1;
            y4 = y2;
            if (x1 + l <= 1000) {
                x3 = x1 + l;
                x4 = x1 + l;
                found = 1;
            }
            else if (x1 - l >= -1000) {
                x3 = x1 - l;
                x4 = x1 - l;
                found = 1;
            }

            if (found) {
                cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
            }
        }
        else {
            x3 = x1;
            x4 = x2;
            if (y1 + l <= 1000) {
                y3 = y1 + l;
                y4 = y1 + l;
                found = 1;
            }
            else if (y1 - l >= -1000) {
                y3 = y1 - l;
                y4 = y1 - l;
                found = 1;
            }

            if (found) {
                cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
            }
        }
    }

    if (!found) {
        cout << -1 << endl;
    }
    return 0;
}
