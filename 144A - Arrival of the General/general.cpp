#include <iostream>
#include <string>

using namespace std;

int main() {
    int n,max,min,maxIn,minIn,x;
    maxIn = 0;
    minIn = 0;
    max = 0;
    min = 101;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i<n; ++i) {
        scanf("%d",&x);
        if (x <= min) {
            min = x;
            minIn = i;
        }
        if (x > max) {
            max = x;
            maxIn = i;
        }
    }
    int diff;
    if (maxIn > minIn) {
        diff = maxIn + n - 2 - minIn;
    }
    else {
        diff = maxIn + n - 1 - minIn;
    }

    printf("%d", diff);

    return 0;
}
