#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int com[n];
    for (int i = 0; i < n; ++i) {
        cin >> com[i];
    }
    int info = 0;
    int hacked[n];
    fill(hacked, hacked + n, 0);
    int turn = 0;
    int pos = 0;
    while (info < n) {
            for (pos = 0; pos < n; ++pos) {
                if (hacked[pos] == 0 && info >= com[pos]) {
                    hacked[pos] = 1;
                    info++;
                } 
            }
        if (info == n) {
            break;
        }
        else {
            turn++;
        }
        for (pos = n-1; pos >= 0; --pos) {
            if (hacked[pos] == 0 && info >= com[pos]) {
                hacked[pos] = 1;
                info++;
            } 
        }
        if (info < n) {
            turn++;
        }
    }
    cout << turn << endl;
    return 0;
}
