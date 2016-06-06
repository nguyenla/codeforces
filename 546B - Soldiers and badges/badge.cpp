#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,x;
    cin >> n;
    int check[2*n];
    fill (check, check+2*n,0);
    int count = 0;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        if (check[x] == 0) {
            check[x] = 1;
        }
        else {
            while (check[x]!=0) {
                ++x;
                ++count;
            }
            check[x] = 1;
        }
    }
    cout << count << endl;
    return 0;
}
