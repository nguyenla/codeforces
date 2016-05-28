#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int a,b,k,m;
    cin >> a >> b >> k >> m;
    int arrayA[a], arrayB[b];
    for (int i = 0; i < a; ++i) {
        cin >> arrayA[i];
    }
    for (int i = 0; i < b; ++i) {
        cin >> arrayB[i];
    }

    if (arrayA[k-1] >= arrayB[b-m]) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
    }
    return 0;
}
