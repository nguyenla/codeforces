#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    if ((b < a && c > 0) || (b > a && c < 0) || (c==0 && a!=b)) {
        cout << "NO" << endl;
    }
    else if (c == 0) {
        cout << "YES" << endl;
    }
    else {
        int x = max(b-a,a-b);
        int y = max(c,0-c);
        if (x % y == 0) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }

    }
    return 0;
}
