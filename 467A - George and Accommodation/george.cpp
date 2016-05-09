#include <iostream>
#include <string>

using namespace std;

int main() {
    int n,a,b,x;
    scanf("%d",&n);
    x=0;
    for (int i = 0; i<n;++i) {
        scanf("%d",&a);
        scanf("%d",&b);
        if (a+2 <=b) {
            ++x;
        }
    }
    printf("%d",x);
    return 0;
}
