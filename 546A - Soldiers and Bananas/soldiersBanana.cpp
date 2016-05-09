#include <iostream>
#include <string>

using namespace std;

int main() {
    int k,n,w,total;
    scanf("%d",&k);
    scanf("%d",&n);
    scanf("%d",&w);
    total = w*(w+1)*k/2;
    printf("%d",max(0,total - n));
    return 0;
}
