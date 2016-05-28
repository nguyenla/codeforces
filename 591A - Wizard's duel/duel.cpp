#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int l,p,q;
    cin >> l >> p >> q;
    double x = l;
    x = x/(p+q);
    double res = x* p;
    cout << res << endl;
    return 0;
}
