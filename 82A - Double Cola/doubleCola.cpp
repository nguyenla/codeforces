#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {
    int n,a;
    scanf("%d",&n);
    a = 0;
    while (n - 5*(pow(2,a)) > 0) {
        n=n-5*(pow(2,a));
        ++a;
    }
    if (n-4*pow(2,a) > 0) {
        printf("Howard");
    }
    else if (n-3*pow(2,a) > 0) {
        printf("Rajesh");
    }
    else if (n-2*pow(2,a) > 0) {
        printf("Penny");
    }
    else if (n-pow(2,a) > 0) {
        printf("Leonard");
    }
    else {
        printf("Sheldon");
    }
    return 0;
}
