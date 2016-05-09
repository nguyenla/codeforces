#include <iostream>
#include <string>

using namespace std;

int main() {
    int n,a,b;
    int p=0;
    int maxc = 0;
    scanf("%d",&n);
    for (int i=0; i<n;++i) {
        scanf("%d",&a);
        scanf("%d",&b);
        p=p-a+b;
        maxc=max(maxc,p);
    } 
    printf("%d",maxc);
    return 0;
}
