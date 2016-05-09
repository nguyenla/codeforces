#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,d;
    cin >> n >> d;
    int t,x;
    t=0;
    for (int i = 0; i < n; ++i) {
       // scanf("%d", &t[i]);
        cin >> x;
        t+=x;
    }
    if (t + 10*(n-1) > d) {
        cout << -1 << endl;
    }
    else {
        int j = 2*(n-1) + (d-t-10*(n-1))/5;
        cout << j << endl;
    }
    return 0;
}
