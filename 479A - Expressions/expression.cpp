#include <iostream>
#include <string>

using namespace std;

int main() {
    int a,b,c,n;
    n = 0;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    n = max(n,(a+b)*c);
    n = max(n,a+b*c);
    n = max(n,a*b*c);
    n = max(n,a*b+c);
    n = max(n,a*(b+c));
    n = max(n,a+b+c);
    printf("%d",n);
    return 0;
}
