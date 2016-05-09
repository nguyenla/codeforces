#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,m;
    scanf("%d", &n);
    scanf("%d", &m);
    int min = n/2 + n%2;
    int res = 0;
    if (n < m) {
        res = -1;
    }
    else if (n==m) {
        res = n;
    }
    else if (min < m) {
        res = m;
    }
    else if (min == m) {
        res = m;
    }
    else {
        if (min %m == 0) {
            res = min;
        }
        else {
            res = (min/m+1)*m;
        }
    }
    printf("%d", res);
    return 0;
}
