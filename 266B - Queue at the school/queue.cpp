#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,t;
    cin >> n >> t;
    char pos[n], next[n];
    string line;
    cin >> line;
    for (int i = 0; i < n; ++i) {
        pos[i] = line.at(i);
        next[i] = line.at(i);
    }
    for (int i = 0; i < t; ++i) {
        for (int j = 0; j < n-1; ++j) {
            if (pos[j] == 'B' && pos[j+1] == 'G') {
                next[j] = 'G';
                next[j+1] = 'B';
            }
        }
        for (int j = 0; j < n; ++j) {
            pos[j] = next[j];
        }
    }


    for (int j = 0; j < n; ++j) {
        cout << pos[j];
    }
    cout << endl;

    return 0;
}
