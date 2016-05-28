#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,a,b;
    cin >> n >> a >> b;
    int x = max(a+1, n-b);
    cout << n-x+1 << endl;
    return 0;
}
