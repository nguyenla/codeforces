#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int a,b,c,d,e;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    if (((a+b+c+d+e)%5 == 0) && (a+b+c+d+e) != 0) {
        printf("%d",(a+b+c+d+e)/5);
    }
    else {
        printf("-1");
    }
    return 0;
}
