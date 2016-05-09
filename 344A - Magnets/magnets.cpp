#include <iostream>
#include <string>

using namespace std;

int main() {
    int n,x,cur,count;
    scanf("%d", &n);
    count = 1;
    scanf("%d",&cur);
    for (int i = 1; i < n; ++i) {
        scanf("%d",&x);
        if (x != cur) {
            ++count;
            cur = x;
        }
    }
    printf("%d", count);
    return 0;
}
