#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int a,b,t;
    cin >> a >> b;
    t = 0;
    while (!(a == 0 || b == 0 || (a==1 && b == 1))) {
        t++;
        if (a== 1) {
            a++;
            b-=2;
        }
        else if (b==1) {
            b++;
            a-=2;
        }
        else {
            if ( a >= b) {
                b++;
                a-=2;
            }
            else {
                a++;
                b-=2;
            }
        }
    }
    cout << t << endl;

    return 0;
}
