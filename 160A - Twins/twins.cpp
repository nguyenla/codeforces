#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,x,sum,m;
    sum = 0;
    scanf("%d", &n);
    int coin[n];
    for (int i = 0;i<n;++i) {
        scanf("%d",&x);
        sum+=x;
        coin[i] = x;
    }
    m = sum/2+1;
    vector<int> v (coin, coin+n);
    sort(v.begin(),v.end());
//    for (int i = 0; i < n; ++i) {
//        printf("%d ",v.at(i));
//    }

    int count = 0;
    for (int i = n-1;i>=0;--i) {
        if (m>0) {
            count++;
            m-=v.at(i);
        }
        else {
            break;
        }
    }
    printf("%d",count);
    return 0;
}
