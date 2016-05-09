#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int a,b,c,n;
    int shoes[4];
    for (int i = 0; i<4; ++i) {
        scanf("%d", &a);
        shoes[i] = a;
    }
    vector<int> v(shoes,shoes+4);
    sort(v.begin(), v.end());
    n = 1;
    if (v.at(1) != v.at(0)) {
        ++n;
    }
    if (v.at(2) != v.at(1)) {
        ++n;
    }
    if (v.at(3) != v.at(2)) {
        ++n;
    }
    printf("%d", 4-n);
    
    return 0;
}
