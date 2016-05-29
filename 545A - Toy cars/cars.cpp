#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,x;
    cin >> n;
    int m[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> m[i][j];
        }
    }
    x = 0;
    vector<int> v;
    for (int i = 0; i < n; ++i) {
        bool check = true;
        for (int j = 0; j < n; ++j) {
            int y = m[i][j];
            if (y != -1 && y != 0 && y!= 2) {
                check = false;
                break;
            }
        }
        if (check) {
            v.push_back(i);
            x++;
        }
    }

    cout << x << endl;
    if (x > 0) {
        for (int i = 0; i < x-1; ++i) {
            cout << v.at(i)+1 << " ";
        }
        cout << v.at(x-1)+1 << endl;
    }

    return 0;
}
