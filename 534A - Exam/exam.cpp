#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 1 || n == 2) {
        cout << 1 << endl;
        cout << 1 << endl;
    }
    else if (n == 3) {
        cout << 2 << endl;
        cout << 1 << " " << 3 << endl;
    }
    else if (n == 4) {
        cout << 4 << endl;
        cout << "2 4 1 3" << endl;
    }
    else {
        cout << n << endl;
        int i = 1;
        int c = 1;
        while (c <= n) {
            cout << c;
            i++;
            c+=2;
            if (i!=n) {
               cout << " ";
            }
        } 

        c = 2;
        while (c <= n) {
            cout << c;
            i++;
            c+=2;
            if (i <= n) {
               cout << " ";
            }
        } 
    cout << " " << endl;
    }

    return 0;
}
