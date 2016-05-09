#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,x;
    scanf("%d", &n);
    int box[n];
    for (int i = 0; i<n; ++i) {
        scanf("%d", &x);
        box[i] = x;
    }

    vector<int> boxv(box, box+n);
    sort(boxv.begin(),boxv.end());
    for (int i = 0; i<n-1; ++i) {
        printf("%d ", boxv.at(i));
    }
    printf("%d", boxv.at(n-1));
    return 0;
}
