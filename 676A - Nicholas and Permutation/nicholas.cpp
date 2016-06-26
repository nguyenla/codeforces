#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,x,a,b;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        if (x == 1) {
            a = i;
        }
        else if (x == n) {
            b = i;
        }
    }
    int res = max(a-0,n-1-a);
    res = max(res, b);
    res = max(res, n-1-b);
    cout << res << endl;
    return 0;
}
