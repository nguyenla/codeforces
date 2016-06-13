#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,x;
    cin >> n;
    int bids[n];
    for (int i = 0; i < n; ++i) {
        cin >> x;
        while (x%2 == 0) {
            x = x / 2;
        }
        while (x%3 == 0) {
            x = x / 3;
        }
        bids[i] = x;
    }
    int cur = bids[0];
    int win = 1;
    for (int i = 1; i < n; ++i) {
        if (bids[i] != cur) {
            win = 0;
        }
    }
    if (win) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}
