#include <iostream>
#include <string>

using namespace std;

int main() {
    int n,p,q,x;
    scanf("%d",&n);
    int arr[n];
    fill(arr,arr+n,0);
    scanf("%d",&p);
    for (int i = 0; i<p; ++i) {
        scanf("%d",&x);
        arr[x-1] = 1;
    }
    
    scanf("%d",&q);
    for (int i = 0; i<q; ++i) {
        scanf("%d",&x);
        arr[x-1] = 1;
    }

    int check = 1;
    for (int i = 0; i<n; ++i) {
        if (arr[i] == 0) {
            check = 0;
        }
    }

    if (check == 1) {
        printf("I become the guy.");
    }
    else {
        printf("Oh, my keyboard!");
    }

    return 0;
}
