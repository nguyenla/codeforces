#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int bulbs[m+1];
    fill(bulbs,bulbs+m+1,0);
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        for (int j = 0; j < x; ++j) {
            int y;
            cin >> y;
            bulbs[y] = 1;
        }
    }

    int check = 1;
    for (int i = 1; i < m+1; ++i) {
        if (bulbs[i] == 0) {
            check = 0;
            break;
        }
    }
    if (check) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}
