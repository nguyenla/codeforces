#include <iostream>
#include <string>

using namespace std;

int main() {
    int a,b,n,o;
    scanf("%d",&a);
    scanf("%d",&b);
    n = a;
    o = a;
    while (o>=b) {
        int x = o/b;
        n+= x;
        o = o - x*b + x;
    }
    printf("%d",n);
    return 0;
}
