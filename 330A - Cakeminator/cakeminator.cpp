#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int r,c;
    cin >> r >> c;
    cin.ignore(10000, '\n');
    int rows[r],cols[c];
    fill(rows, rows+r,0);
    fill(cols, cols + c, 0);
    int num = 0;
    for (int i = 0; i < r; ++i) {
        string line;
        getline(cin, line);
        for (int j = 0; j < c; ++j) {
            if (line.at(j) == 'S') {
                rows[i] = 1;
                cols[j] = 1;
                num++;
            }
        }
    }
    if (num == 0) {
        cout << r*c << endl;
    }
    else {
        int m[r][c];
        for (int i = 0; i < r; ++i) {
            fill(m[i], m[i] + c, 0);
        }
        int count = 0;
        for (int i = 0; i < r; ++i) {
            if (rows[i] == 0) {
                for (int k = 0; k < c; ++k) {
                    if (m[i][k] == 0) {
                        count++;
                        m[i][k] = 1;
                    }
                }
            }
        }
        for (int i = 0; i < c; ++i) {
            if (cols[i] == 0) {
                for (int k = 0; k < r; ++k) {
                    if (m[k][i] == 0) {
                        count++;
                        m[k][i] = 1;
                    }
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
