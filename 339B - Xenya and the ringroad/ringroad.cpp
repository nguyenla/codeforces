#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long int n,m,x;
    cin >> n;
    cin >> m;
    long long int task[m];
    for (long long int i = 0; i < m; ++i) {
        cin >> x;
        task[i] = x;
    }
    long long int total = task[0] - 1;
    for (long long int i = 0; i < m-1; ++i) {
        if (task[i+1] >= task[i]) {
            total += task[i+1] - task[i];
        }
        else {
            total += task[i+1] + n - task[i];
        }
    }
    cout << total << endl;
    return 0;
}
