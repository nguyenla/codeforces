#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int m = min(a,b);
    int s = a+b - 2*m;
    printf("%d %d",m,s/2);

    return 0;
}
