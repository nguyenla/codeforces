#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    int members[n];
    int count = 0;
    for (int i = 0; i<n; ++i) {
        scanf("%d", &members[i]);
        if (members[i] <= 5-k) {
            count++;
        }
    }
    cout << (count/3) << endl;
    return 0;
}
