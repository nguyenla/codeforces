#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int maxTable(int r, int c) {
    if (r==1 && c==1) {
        return 1;
    }
    else if (r == 1) {
        return maxTable(r, c-1);
    }
    else if (c == 1) {
        return maxTable(r-1,c);
    }
    else {
        return maxTable(r,c-1) + maxTable(r-1,c);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", maxTable(n,n));
    return 0;
}
