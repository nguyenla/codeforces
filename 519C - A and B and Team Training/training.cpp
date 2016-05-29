#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int teams = 0;
    if (2*n <= m) {
        teams = n;
    }
    else if (2*m <= n) {
        teams = m;
    }
    else {
        while (!(m==0 || n== 0 || (m==1 && n==1))) {
            if (m >= n) {
                m = m-2;
                n--;
                teams++;
            }
            else {
                n = n-2;
                m--;
                teams++;
            }
        }
    }

    cout << teams << endl;
    return 0;
}
