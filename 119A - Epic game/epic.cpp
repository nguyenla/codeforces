#include <iostream>
#include <string>

using namespace std;

int gcd(int a,int b) {
    if (a< 0 || b < 0) {
        return -1;
    }
    else if (a==0) {
        return b;
    }
    else if (b==0) {
        return a;
    }
    else if (a>b) {
        return gcd(b,a-b);
    }
    else {
        return gcd(a,b-a);
    }
}

int main() {
    int a,b,n;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&n);
    while (1) {
        if (gcd(n,a) > n) {
            printf("1");
            break;
        }
        else {
            n-=gcd(n,a);
        }
        if (gcd(n,b) > n) {
            printf("0");
            break;
        }
        else {
            n-=gcd(n,b);
        }
    }
    return 0;
}
