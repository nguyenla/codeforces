#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int house[n];
    for (int i = 0; i < n; ++i) {
        cin >> house[i];
    }
    int add[n];
    int curMax = 0;
    for (int i = n-1; i >= 0; --i) {
        if (house[i] > curMax) {
            add[i] = 0;
        }
        else {
            add[i] = (curMax + 1 - house[i]);
        }
        curMax = max(curMax, house[i]);
    }

    for (int i = 0; i < n-1; i++) {
        cout << add[i] << " ";
    }
    cout << add[n-1] << endl;
    return 0;
}
