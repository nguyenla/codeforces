#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int b,t,res;
    scanf("%d", &b);
    if (b<0) {
        t = 0-b;
        res = min(t,t/10);
        int a = (t/100)*10 + (t%10);
        res = min(res,a);
        printf("%d", 0-res);
    }
    else {
        printf("%d", b);
    }
    return 0;
}
