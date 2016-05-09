#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i < n; ++i) {
        sum += 1 + i*(n-i);
    }
    sum ++;
    printf("%d", sum);

    return 0;
}
