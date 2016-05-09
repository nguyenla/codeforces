#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int m,n;
    cin >> m >> n;
    while (1) {
        if (!m && !n) {
            break;
        }
        char rec[10001];
//        fill(rec,rec + 1000000001,0);
        memset(rec,0,sizeof(rec));
        int count = 0;
        int x;
        for (int i = 0; i<m+n; ++i) {
            cin >> x;
            if (rec[x]) {
                count++;
            }
            else {
                rec[x] = 1;
            }
        }
        cout << count << endl;
        cin >> m >> n;
    }
    return 0;
}
