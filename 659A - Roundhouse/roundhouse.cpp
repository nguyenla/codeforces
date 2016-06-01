#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,a,b;
    cin >> n >> a >> b;
    if (b == 0) {
        cout << a << endl;
    }
    else {
        int pos = a + b;
        if (pos <=0) {
            while (pos <=0) {
                pos += n;
            }
        }
        else if (pos > n) {
            while (pos > n) {
                pos -= n;
            }
        }
        cout << pos << endl;
    }
    return 0;
}
