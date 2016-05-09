#include <iostream>
using namespace std;

int main() {
    int x;
    scanf("%d", &x);
    if (x%2 ==0 && x > 2) {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
