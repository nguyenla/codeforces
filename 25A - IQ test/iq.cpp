#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,x,even;
    scanf("%d", &n);
    int num[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &x);
        num[i] = x;
    }

    if ((num[0]%2==0 && num[1]%2==0) || (num[1]%2==0 && num[2]%2==0) || (num[0]%2==0 && num[2]%2==0)) {
        even = 1;
    }
    else {
        even = 0;
    }
    for (int j = 0; j < n; ++j) {
        if (num[j] % 2 == even) {
            printf("%d", j+1);
            break;
        }
    }
    return 0;
}
