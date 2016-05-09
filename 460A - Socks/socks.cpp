#include <iostream>
#include <string>

using namespace std;

int main() {
    int n,m,d;
    d = 1;
    scanf("%d",&n);
    scanf("%d",&m);
    while (n!=0) {
        --n;
        if (d%m==0) {
            ++n;
        }
        ++d;
    }
    printf("%d",d-1);
    return 0;
}
