#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long int num[100001],res[100001];
    int n,x;
    scanf("%d", &n);
    fill(num, num + 100001,0);
    for (int i = 0; i < n; ++i) {
        cin >> x;
        num[x]++;
    }
    fill(res, res + 100001,0);
    res[0] = 0;
    res[1] = num[1];
    for (int i = 2; i < 100001;++i) {
        res[i] = max(res[i-1],res[i-2] + i*num[i]);
    }
    cout << res[100000] << endl;
    return 0;
}
