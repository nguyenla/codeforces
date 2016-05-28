#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int h[2*n+1][2*n+1];
    for (int i = 0; i < 2*n+1; ++i) {
        fill(h[i], h[i] + 2*n + 1,-1);
    }

    for (int i = 0; i < n+1; ++i) {
        int j = n - i;
        int k = 0;
        while (k < i) {
            h[i][j] = k;
            k++;
            j++;
        }
        h[i][j] = i;
        j++;
        k--;
        while (k >= 0) {
            h[i][j] = k;
            k--;
            j++;
        }
    }

    for (int i = n+1; i < 2*n+1; ++i) {
        int x = 2*n - i;
        int j = n - x;
        int k = 0;
        while (k < x) {
            h[i][j] = k;
            k++;
            j++;
        }
        h[i][j] = x;
        j++;
        k--;
        while (k >= 0) {
            h[i][j] = k;
            k--;
            j++;
        }
    }

    //print out
    for (int i = 0; i < n + 1; ++i) {
        int end = n + i;
        for (int j = 0; j < end; ++j) {
            if (h[i][j] == -1) {
                cout << "  ";
            }
            else {
                cout << h[i][j] << " ";
            }
        }
        if (h[i][end] == -1) {
            cout << " " << endl;
        }
        else {
            cout << h[i][end] << endl;
        }
    }

    for (int i = n+1; i < 2*n + 1; ++i) {
        int x = 2*n - i;
        int end = n + x;
        for (int j = 0; j < end; ++j) {
            if (h[i][j] == -1) {
                cout << "  ";
            }
            else {
                cout << h[i][j] << " ";
            }
        }
        if (h[i][end] == -1) {
            cout << " " << endl;
        }
        else {
            cout << h[i][end] << endl;
        }
    }
    return 0;
}
