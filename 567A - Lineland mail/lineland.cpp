#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,x;
    scanf("%d", &n);
    int cities[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &x);
        cities[i] = x;
    }

    printf("%d %d\n",cities[1] - cities[0], cities[n-1] - cities[0]);

    for (int i = 1; i < n-1; ++i) {
        int a,b;
        if (cities[i] - cities[i-1] > cities[i+1] - cities[i]) {
            a = cities[i+1] - cities[i];
        }
        else {
            a = cities[i] - cities[i-1];
        }

        if (cities[i] - cities[0] > cities[n-1] - cities[i]) {
            b = cities[i] - cities[0];
        }
        else {
            b = cities[n-1] - cities[i];
        }
        printf("%d %d\n", a,b);
    } 
    printf("%d %d",cities[n-1] - cities[n-2], cities[n-1] - cities[0]);

    return 0;
}
