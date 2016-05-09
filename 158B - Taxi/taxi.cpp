#include <iostream>
#include <string>

using namespace std;

int main() {
    int n,a,b,c,d,k;
    a = 0;
    b = 0;
    c=0;
    d=0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &k);
        if (k==1) {a++;}
        else if (k==2) {b++;}
        else if (k==3) {c++;}
        else if (k==4) {d++;}
    }

    int x = d + c;
    a = max(0,a-c);
    x+= (b/2);
    int left = a+(b%2)*2;
    x+= (left+3)/4;
    printf("%d",x);
    return 0;
}
