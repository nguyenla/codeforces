#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(10000, '\n');
    int board[n][n];
    for (int i = 0; i < n; ++i) {
        string line;
        getline(cin, line);
        for (int j = 0; j < n; ++j) {
            if (line.at(j) == 'o') {
                board[i][j] = 0;
            }
            else {
                board[i][j] = 1;
            }
        }
    }
    bool res = true;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int count = 0;
            if (i-1 >= 0 && board[i-1][j] == 0) {
                count++;
            }
            if (i+1 < n && board[i+1][j] == 0) {
                count++;
            }
            if (j-1 >= 0 && board[i][j-1] == 0) {
                count++;
            }
            if (j+1 < n && board[i][j+1] == 0) {
                count++;
            }
            if (count %2 == 1) {
                res = false;
                break;
            }
        }
    }
    if (res) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}
