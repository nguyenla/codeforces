#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,a;
    cin >> n;
    for (int i = 0; i<n; ++i) {
        cin >> a;
        if (360%(180-a) == 0) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
