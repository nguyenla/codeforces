#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int imm[n+1];
    for (int i = 1; i <= n; ++i) {
        cin >> imm[i];
    }

    int level[n+1];
    for (int i = 1; i <=n; ++i) {
        int j = i;
        int l = 1;
        while (imm[j] != -1) {
            j = imm[j];
            l++;
        }
        level[i] = l;
    }
    int num = 1;
    for (int i = 1; i <=n; ++i) {
        num = max(num, level[i]);
    }
    cout << num << endl;
    return 0;
}
