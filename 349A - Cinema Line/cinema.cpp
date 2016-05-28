#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,x;
    cin >> n;
    int a = 0;
    int b = 0;
    int c = 0;
    int possible = 1;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        if (x == 25) {
            a++;
        }
        else if (x == 50) {
            if (a>0) {
                a--;
                b++;
            }
            else {
                possible = 0;
                break;
            }
        }
        else {
            if (a > 0 && b > 0) {
                a--;
                b--;
                c++;
            }
            else if (a > 2) {
                a = a - 3;
                c++;
            }
            else {
                possible = 0;
                break;
            }
        }
    }
    if (possible) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
