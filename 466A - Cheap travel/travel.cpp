#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,m,a,b;
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &a);
    scanf("%d", &b);
    int x,y,z;
    x = (n/m) * b + (n%m) * a;
    y = n * a;
    z = (n/m + 1) * b;
    int res = min(x,y);
    res = min(res,z);
    printf("%d",res);
    return 0;
}
