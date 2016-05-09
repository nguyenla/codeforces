#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int m,s;
    scanf("%d", &m);
    scanf("%d", &s);
    if (s == 0 && m == 1) {
        cout << "0 0" << endl;
    }
    else if (s < 1 || s > m*9) {
        cout << "-1 -1" <<endl;
    }
    else {
        string min = "";
        string max = "";
        int c = s/9;
        int d = s%9;

        if (d != 0) {
            // find the min
            for (int i = 0; i < c; ++i) {
                min = "9" + min;
            }
            if (c+1 < m) {
                char x = '0' + d-1;
                min = x + min;
                for (int i = 0; i < m-c-2; ++i) {
                    min = "0" + min;
                }
                min = "1" + min;
            }
            else {
                char x = '0' + d;
                min = x + min;
            }
            cout << min << endl;

            //find the max
            for (int i = 0; i < c; ++i) {
                max = "9" + max;
            }
            char x = '0' + d;
            max = max + x;
            for (int i = 0; i < m-c-1; ++i) {
                max = max + "0";
            }
            cout << max << endl;
        }

        else {
            //find min
            for (int i = 0; i < c-1; ++i) {
                min = "9" + min;
            }
            if (m > c) {
                min = "8" + min;
                for (int i = 0; i < m-c-1; ++i) {
                    min = "0" + min;
                }
                min = "1" + min;
            }
            else {
                min = "9" + min;
            }
            cout << min <<endl;

            //find max
            for (int i = 0; i < c; ++i) {
                max = "9" + max;
            }
            for (int i = 0; i < m-c; ++i) {
                max = max + "0";
            }
            cout << max << endl;
        }
    }
    return 0;
}
