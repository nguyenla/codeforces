#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int num[n];
    for (int i = 0; i<n; ++i) {
        scanf("%d", &num[i]);
    }

    int distinct[n];
    int count = 0;
    int freq[100001];
    fill(freq, freq+100001,0);
    for (int i = n-1; i>=0; --i) {
        if (freq[num[i]] == 0) {
            freq[num[i]] = 1;
            count++;
        }
        distinct[i] = count;
    }

    int x;
    for (int i = 0; i < m; ++i) {
        cin >> x;
        cout << distinct[x-1] << endl;
    }

    return 0;
}
