#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string line;
    getline(cin, line);
    int n = line.size();
    int m, a,b;
    cin >> m;
    int check[n];
    check[0] = 0;
    int count = 0;
    for (int i = 1; i<n; ++i) {
        if (line.at(i) == line.at(i-1)) {
            count++;
        }
        check[i] = count;
    }

    for (int i = 0; i<m; ++i) {
        cin >> a >> b;
        int res = check[b-1] - check[a-1];
        cout << res << endl;
    }

    return 0;
}
