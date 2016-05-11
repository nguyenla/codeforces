#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,x;
    cin >> n;
    int check = 0;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        if (x == 1) {
            check = 1;
        }
    }
    if (check) {
        cout << -1 << endl;
    }
    else {
        cout << 1 << endl;
    }

    return 0;
}
