#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int strips[5];
    cin >> strips[1] >> strips[2] >> strips[3] >> strips[4];
    cin.ignore(10000, '\n');
    string line;
    getline(cin, line);
    int n = line.size();
    int res = 0;
    for (int i = 0; i < n; ++i) {
        res += strips[line.at(i) - '0'];
    }
    cout << res << endl;
    return 0;
}
