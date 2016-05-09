#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int x = 0;
    while (n>0) {
        x+=n%2;
        n/=2;
    }
    cout << x << endl;
    return 0;
}
