#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int m = n/2;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m - i; ++j) {
            cout << "*";
        }
        for (int j = m-i; j < m + i + 1; ++j) {
            cout << "D";
        }
        for (int j = m+i+1; j < n; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < n; ++i) {
        cout << "D";
    }
    cout << endl;

    for (int i = 0; i < m; ++i) {
        int h = m - 1 - i;
        for (int j = 0; j < m - h; ++j) {
            cout << "*";
        }
        for (int j = m-h; j < m + h + 1; ++j) {
            cout << "D";
        }
        for (int j = m+h+1; j < n; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
