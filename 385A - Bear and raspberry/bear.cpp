#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,c;
    cin >> n >> c;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int res = 0;
    for (int i = 0; i < n-1; ++i) {
        res = max(res, arr[i] - arr[i+1] - c);
    }
    cout << res << endl;
    return 0;
}
