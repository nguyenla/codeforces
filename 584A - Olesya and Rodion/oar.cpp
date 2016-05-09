#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,t,res;
    scanf("%d", &n);
    scanf("%d", &t);
    if (n==1 && t == 10) {
        printf("-1");
    }
    else if (n==1) {
        printf("%d", t);
    }
    else if (t!= 10) {
        for (int i = 0; i < n; ++i) {
            printf("%d", t);
        }
    }
    else {
        for (int i = 0; i < n-1; ++i) {
            printf("1");
        }
        printf("0");
    }

    return 0;
}
