#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int array[n];
    int x;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        array[i] = x;
    }
    int diff = array[n-1] - array[0];
    for (int i = 0; i < n-2; i++) {
        diff = min(diff, array[i+2] - array[i]);
    }
    int next[n-1];
    for (int i = 0; i < n-1; i++) {
         diff = max(diff, array[i+1] - array[i]);
    }
    cout << diff << endl;
    return 0;
}
