#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, count;
    count = 0;
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        int a,b,c;
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        if ((a==1 && b==1) ||(b==1&c==1) || (a==1 && c==1)) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
