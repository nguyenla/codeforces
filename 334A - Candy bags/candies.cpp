#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int x = n*n;
    int s = 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n/2; ++j) {
            cout << (s + i*n + j);
            cout << " ";
            cout << (x - i*n - j);
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}
