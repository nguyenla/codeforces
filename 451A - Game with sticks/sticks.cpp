#include <iostream>
#include <string>

using namespace std;

int main() {
    int a,b,x;
    scanf("%d",&a);
    scanf("%d",&b);
    x = min(a,b);
    if (x %2 == 0) {
        printf("Malvika");
    }
    else {
        printf("Akshat");
    }
    return 0;
}
