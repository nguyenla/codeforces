#include <iostream>
#include <string>

using namespace std;

int main() {
    int n,a,b,c,x,y,z;
    z=0;
    y=0;
    z=0;
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        x+=a;
        y+=b;
        z+=c;
    }
    if (x == 0 && y==0 && z==0) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}
