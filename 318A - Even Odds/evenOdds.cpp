#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long int n,k,x;
    cin >> n;
    cin >> k;
    if (k <= (n+1)/2) {
        x = 2*k-1;
        cout << x << endl;
    }
    else {
        x = 2*(k-(n+1)/2);
        cout << x << endl;
    }
    return 0;
}
