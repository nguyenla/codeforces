#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, x;
    scanf("%d", &n);
    scanf("%d", &x);
    int res = 0;
    for (int i = 1; i*i <= x; ++i) {
        if (x %i == 0) {
            if (i*i == x && i <=n) {
                res++;
            }
            else if (i <=n && x/i <=n) {
                res +=2;
            }
        }
    }
    printf("%d", res);
    return 0;
}
