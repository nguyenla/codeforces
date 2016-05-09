#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,x,y;
    cin >> n;
    int hor[n+1], ver [n+1];
    fill(hor, hor+n+1,0);
    fill(ver, ver+n+1,0);
    for (int i = 1; i <= n*n; ++i) {
        cin >>x >> y;
        if (hor[x] == 0 && ver[y] == 0) {
            cout << i << endl;
            hor[x] = 1;
            ver[y] = 1;
        }
    }
    return 0;
}
