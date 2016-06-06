#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    int num[1000001];
    fill(num, num + 1000001, 0);
    for (long long int i = 2; i < 1001; ++i) {
        long long int j = i + i;
        while (j < 1000001) {
            num[j] = 1;
            j+= i;
        }
    }
    map<long long int, int> mp;
    for (long long int i = 2; i<1000001; ++i) {
       if (num[i] == 0) {
          long long int t = i * i;
          mp[t] = 1;
       }
    }

    for (int i = 0; i < n; ++i) {
        long long int x;
        cin >> x;
        if (mp[x] == 1) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
