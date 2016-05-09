#include <iostream>
#include <string>

using namespace std;

int main() {
    long long int x,y;
    cin >> x;
    if (x%2 == 0) {
        y = x/2;
    }
    else {
        y = 0 - ((x+1)/2);
    }
    cout << y << endl;
    return 0;
}
