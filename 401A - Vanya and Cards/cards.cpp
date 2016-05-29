#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,x,a;
    cin >> n >> x;
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        sum+=a;
    }
    if (sum < 0) {
        cout << (-sum+x-1) / x << endl;
    }
    else if (sum > 0) {
        cout << (sum+x-1) / x << endl;
    }
    else {
        cout << 0 << endl;
    }
    return 0;
}
