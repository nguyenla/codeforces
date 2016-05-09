#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int x,y,n,a,b;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&n);
    a = abs(x);
    b = abs(y);
    if (n< a+b) {
       printf("No");
    }
    else if (n == a+b) {
       printf("Yes");
    }
    else if ((n-a-b) %2 == 0) {
       printf("Yes");
    }
    else {
       printf("No");
    } 
    return 0;
}
