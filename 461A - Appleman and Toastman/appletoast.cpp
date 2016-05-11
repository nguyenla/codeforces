#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long n;
    vector<long> x;
    cin >> n;
    long long score = 0;
    for (long i = 0; i < n; ++i) {
        long a;
        cin >> a;
        score += a;
        x.push_back(a);
    }
    sort(x.begin(), x.end());
    long long j = 0;
    while (j < n-1) {
        score += (j+1) * x.at(j);
        j++;
    }
    score += (n-1)*x.at(n-1);
    cout << score << endl;
    return 0;
}
