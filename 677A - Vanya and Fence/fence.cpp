#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,h;
    cin >> n >> h;
    int x;
    int w = 0;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        if (x > h) {
            w +=2;
        }
        else {
            w++;
        }
    }
    cout << w << endl;
    return 0;
}
