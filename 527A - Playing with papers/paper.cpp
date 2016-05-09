#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long x,y;
    cin >> x >> y;
    long long count = 0;
    while (x != y && x!= 0 && y!=0) {
        if (x < y) {
            count += y/x;
            y = y%x;
        }
        else {
            count += x/y;
            x = x%y;
        }
    }
    if (x == y) {
        count++; 
    }
    cout << count << endl;
    return 0;
}
