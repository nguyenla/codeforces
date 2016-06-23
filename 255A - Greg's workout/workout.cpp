#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int x;
    while (i < n) {
        cin >> x;
        a += x;
        ++i;
        if (i == n) {
            break;
        }
        cin >> x;
        b += x;
        i++;
        if (i ==n) {
            break;
        }
        cin >> x;
        c += x;
        i++;
    }
    if (a>b && a>c) {
        cout << "chest" << endl;
    }
    else if (b > c) {
        cout << "biceps" << endl;
    }
    else {
        cout << "back" << endl;
    }

    return 0;
}
