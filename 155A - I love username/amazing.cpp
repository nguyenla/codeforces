#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,x;
    scanf("%d", &n);
    int point[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &x);
        point[i] = x;
    }
    int max = point[0];
    int min = point[0];
    int count = 0;
    for (int i = 1; i<n; ++i) {
        if (point[i] < min) {
            count++;
            min = point[i];
        }
        else if (point[i] > max) {
            count++;
            max = point[i];
        }
    }
    printf("%d", count);
    
    return 0;
}
