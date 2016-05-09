#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int d,x,t;
    cin >> d;
    t = 0;
    vector<int> m;
    for (int i = 0; i<12; ++i) {
        cin >> x;
        t+= x;
        m.push_back(x);
    }
    if (t < d) {
        cout << -1 << endl;
    }
    else {
        sort(m.begin(), m.end());
        int count =0;
        int i = 11;
        while (count < d && i >= 0) {
            count += m.at(i);
            i--;
        }
        cout << (11-i) << endl;
    }
    return 0;
}
