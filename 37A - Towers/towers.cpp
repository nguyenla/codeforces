#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,x;
    cin >> n;
    vector<int> array;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        array.push_back(x);
    }
    sort(array.begin(), array.end());
    int count = 1;
    int largest = 0;
    int cur = 1;
    int curHeight = 1;
    while (cur < n) {
        if (array.at(cur) == array.at(cur-1)) {
            curHeight++;
        }
        else {
            count++;
            largest = max(largest, curHeight);
            curHeight = 1;
        }
        cur++;
    }
    largest = max(largest, curHeight);
    cout << largest << " " << count;
    return 0;
}
