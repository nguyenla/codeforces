#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    int res;
    for (int i = 0; i < n; ++i) {
        int f,t,j;
        cin >> f >> t;
        if (t <= k) {
            j = f;
        }
        else {
            j = f - (t-k);
        }
        if (i == 0) {
            res = j;
        }
        else {
            res = max(res, j);
        }
    }
    cout << res << endl;
    return 0;
}
