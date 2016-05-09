#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    double total = 0;
    int x;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        total+=x;
    }
    cout << total / n << endl;
    return 0;
}
