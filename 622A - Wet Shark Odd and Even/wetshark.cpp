#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long n;
    cin >> n;
    long long sum, odd, x;
    odd = 0;
    sum = 0;
    for (long i = 0; i < n; ++i) {
        cin >> x;
        sum +=x;
        if (x %2 == 1) {
            if (odd == 0) {
                odd = x;
            }
            else {
                odd = min(odd,x);
            }
        }
    }

    if (sum%2 == 1) {
        cout << sum - odd << endl;
    }
    else {
        cout << sum << endl;
    }
    return 0;
}
