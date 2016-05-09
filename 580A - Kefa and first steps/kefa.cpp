#include <iostream>
#include <string>

using namespace std;

int main() {
    int n,cur,prev,next,x;
    scanf("%d",&n);
    cur = 0;
    x= 0;
    scanf("%d",&prev);
    for (int i = 1; i<n; ++i) {
        scanf("%d",&next);
        if (next >=prev) {
            ++cur;
        }
        else {
            x = max(x,cur);
            cur =0;
        }
        prev = next;
    }
    x = max(x,cur);
    printf("%d",x+1);
    return 0;
}
