#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long res;
    if (n < 10) {
        res = n;
    }
    else if (n < 100) {
        res = 9 + (n-10+1)*2;
    }
    else if (n < 1000) {
        res = 9 + 180 + (n-100+1)*3;
    }
    else if (n < 10000) {
        res = 9 + 180 + 2700 + (n-1000+1)*4;
    }
    else if (n < 100000) {
        res = 9 + 180 + 2700 + 36000 + (n-10000+1)*5;
    }
    else if (n < 1000000) {
        res = 9 + 180 + 2700 + 36000 + 450000 + (n-100000+1)*6;
    }
    else if (n < 10000000) {
        res = 9 + 180 + 2700 + 36000 + 450000 + 5400000 + (n-1000000+1)*7;
    }
    else if (n < 100000000) {
        res = 9 + 180 + 2700 + 36000 + 450000 + 5400000 + 63000000 + (n-10000000+1)*8;
    }
    else if (n < 1000000000) {
        res = 9 + 180 + 2700 + 36000 + 450000 + 5400000 + 63000000 + 720000000 + (n-100000000+1)*9;
    }
    else {
        res = 9 + 180 + 2700 + 36000 + 450000 + 5400000 + 63000000 + 720000000 + 8100000000 + 10;
    }
    cout << res << endl;
    return 0;
}
