#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,a,l,x;
    scanf("%d", &n);
    a = 1;
    l = 1;
    x = 1;
    while (x <=n) {
        ++a;
        l = l + a;
        x = x + l;;
    }
    printf("%d", a-1);
    return 0;
}
