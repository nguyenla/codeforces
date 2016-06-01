#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,a,b,c,d;
    int count = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b >> c >> d;
        count += (c-a+1)*(d-b+1);
    }
    cout << count << endl;
    return 0;
}
