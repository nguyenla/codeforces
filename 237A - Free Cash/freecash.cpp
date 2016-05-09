#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a,b,c,d;
    if (n == 1) {
        cout << 1 << endl;
    }
    else {
        int count = 1;
        int res = 1;
        cin >> a >> b >> c >> d;
        for (int i = 0; i < n-1; ++i) {
            if (c == a && d == b) {
                count++;
            }
            else {
                res = max(res, count);
                count = 1;
            }
            a = c;
            b = d;
            cin >> c >> d;
        }
        res = max(res,count);
        cout << res << endl;
    }
    return 0;
}
