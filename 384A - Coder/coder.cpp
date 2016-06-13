#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n%2 == 0) {
        cout << n*n/2 << endl;
    }
    else {
        cout << n*n/2 + 1 << endl;
    }

    string s1 = "";
    string s2 = "";
    int i = 0;
    while (i<n) {
        s1 += "C";
        s2 += ".";
        i++;
        if (i<n) {
            s1 +=".";
            s2 +="C";
            ++i;
        }
    }
    if (n%2 == 0) {
        for (int i = 0; i < n; ++i) {
            if (i%2 == 0) {
                cout << s2 << endl;
            }
            else {
                cout << s1 << endl;
            }
        }
    }
    else {
        for (int i = 0; i < n; ++i) {
            if (i%2 == 0) {
                cout << s1 << endl;
            }
            else {
                cout << s2 << endl;
            }
        }
    }

    return 0;
}
