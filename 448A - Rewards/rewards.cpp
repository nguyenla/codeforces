#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int a,b,c,d,e,f,n,sum;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    scanf("%d", &f);
    scanf("%d", &n);
    int t1 = a+b+c;
    int t2 = d+e+f;
    sum = 0;
    sum += (t1+4)/5;
    sum += (t2+9)/10;
    if (sum <= n) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}
