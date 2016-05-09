#include <iostream>
#include <string>

using namespace std;

int main() {
    int a,b,c,d,n;
    int x =0;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&n);
    for (int i = 1; i<=n;++i) {
        if (i%a ==0 || i%b==0 || i%c==0||i%d==0) {
            x++;
        }
    }
    printf("%d",x);
    return 0;
}
