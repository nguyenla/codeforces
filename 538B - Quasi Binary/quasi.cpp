#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int powof10(int n) {
    int x = 1;
    for (int i = 0; i< n; ++i) {
        x*=10;
    }
    return x;
}

int main() {
    int n,m;
    cin >> n;
    m = n;
    int k = 0;
    int digits[7];
    for (int i=0; i<7;++i) {
        digits[i] = m%10;
        m/=10;
    }
    int total = 0;
    vector<int> res;
    while (total != n) {
        int x = 0;
        for (int i = 0; i < 7; ++i) {
            if (digits[i] > 0) {
                digits[i]--;
                x+= powof10(i);
            }
        }
            k++;
            total+= x;
            res.push_back(x);
    }

    cout << k << endl;
    for (int i = 0; i < k; ++i) {
        cout << res.at(i) << " ";
    }
    return 0;
}
