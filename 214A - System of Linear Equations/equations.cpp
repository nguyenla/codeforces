#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int floorRoot(int x) {
    int i = 1;
    while (i*i <=x) {
        ++i;
    }
    return i-1;
}

int main() {
    int n,m,a,b;
    cin >> n >> m;
    int count = 0;
    int x = floorRoot(n);
    for (a = 0; a <= x; ++a) {
        b = n - a*a;
        if (a+b*b == m) {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
