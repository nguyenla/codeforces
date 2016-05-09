#include <iostream>
#include <string>

using namespace std;

int main() {
    int n,x,d;
    scanf("%d",&n);
    scanf("%d",&d);
    int portal[n+1];
    for (int i = 1; i<n+1; ++i) {
        scanf("%d",&x);
        portal[i] = x;
    }
    int cur = 1;
    int check = 0;
    while (cur <= d) {
       cur+= portal[cur];
       if (cur == d) {
           check = 1;
           break;
       }
    }
    if (check) {
        printf("YES");
    }
    else {
        printf("NO");
    }

    return 0;
}
