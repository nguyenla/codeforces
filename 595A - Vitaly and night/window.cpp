#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int x, y;
    int flats[n*m];
    for (int i = 0; i < n*m; ++i) {
        cin >> x >> y;
        if (x+y >= 1) {
            flats[i] = 1;
        }
        else {
            flats[i] = 0;
        }
    }
    int count = 0;
    for (int i = 0; i < n*m; ++i) {
        count += flats[i];
    }
    cout << count << endl;
    return 0;
}
