#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,m,x;
    cin >> n;
    int cumu[n];
    int cur = 0;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        cur += x;
        cumu[i] = cur;
    }

    cin >> m;
    for (int i = 0; i < m; ++i) {
        cin >> x;
        int a = 0;
        int b = n-1;
        int m = (a+b)/2;
        cur = 0;
        if (x <= cumu[0]) {
            cout << 1 << endl;
        }
        else {
            while (!(cumu[m-1] < x && cumu[m] >= x)) {
                if (cumu[m] < x) {
                    a = m;
                }
                else {
                    b = m;
                }
                cur = m;
                m = (a+b)/2;
                if (m == cur) {
                    m++;
                    break;
                }
//                cout << m << " ";
            }
            cout << m+1 << endl;
        }
    }
    return 0;
}
