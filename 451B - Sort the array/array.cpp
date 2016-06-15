#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,x;
    cin >> n;
    int num[n];
    int start, end;
    start = 0;
    end = 0;
    for (int i = 0; i < n; ++i) {
        cin >> num[i];
    }

    int i = 0;
    int possible = 1;
    while (i < n-1) {
        if (num[i] > num[i+1]) {
            start = i;
            x = num[i];
            while (i < n-1 && num[i] > num[i+1]) {
                i++;
            }
            if (i >=n-1) {
                end = n-1;
                if (start >0 && num[start-1]>num[end]) {
                    possible = 0;
                }
                break;
            }
            if (x > num[i+1]) {
                possible = 0;
                break;
            }
            else {
                end = i;
            }
            i++;
            while (i < n-1) {
                if (num[i] > num[i+1]) {
                    possible = 0;
                    break;
                }
                i++;
            }
        }
        i++;
    }
    if (possible) {
        cout << "yes" << endl;
        cout << start+1 << " " << end+1 << endl;
    }
    else {
        cout << "no" << endl;
    }
    return 0;
}
