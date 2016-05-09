#include <iostream>
#include <string>

using namespace std;

int main() {
    int i,x;
    for (i=1;i<=25;++i) {
        scanf("%d",&x);
        if(x==1) {
            break;
        }
    }
    int r = (i+4)/5;
    int c = i%5;
    if(c==0) {c=5;};

    printf("%d",abs(r-3)+abs(c-3));
    return 0;
}
