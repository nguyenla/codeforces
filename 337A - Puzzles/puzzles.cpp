#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n,m,x;
    scanf("%d",&n);
    scanf("%d",&m);
    int puz[m];
    for (int i = 0;i<m;++i) {
        scanf("%d",&x);
        puz[i] = x;
    }
    vector<int> arr(puz,puz+m);
    sort(arr.begin(),arr.end());
    int diff = 1000;
    for (int i = 0; i < m-n+1; ++i) {
        diff = min(diff, arr.at(i+n-1)- arr.at(i));
    }
    printf("%d", diff);
    return 0;
}
