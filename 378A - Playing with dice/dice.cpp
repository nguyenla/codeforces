#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    int x,y,z;
    if (a == b) {
        cout << 0 << " " << 6 << " " << 0 << endl;
    }
    else {
        int m = (a+b)/2;
        if ((a+b)%2 == 0) {
            y = 1;
            if (a < b) {
                x = m-1;
                z = 6 - x - y;
            }
            else {
                z = m-1;
                x = 6 - y - z;
            }
        }
        else {
            y = 0;
            if (a < b) {
                x = m;
                z = 6 - x - y;
            }
            else {
                z = m;
                x = 6 - y - z;
            }
        }
        cout << x << " " << y << " " << z << endl;
    }

    return 0;
}
