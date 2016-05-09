#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,l,x;
    scanf("%d",&n);
    scanf("%d",&l);
    vector<int> s;
    for (int i = 0; i<n; ++i) {
        scanf("%d", &x);
        s.push_back(x);
    }
    sort(s.begin(),s.end());
    int dif = 0;
    for (int i = 0; i < n-1; ++i) {
        dif = max(dif,s.at(i+1) - s.at(i));
    }
    int a = max(s.at(0) - 0, l - s.at(n-1));
    double temp = dif;
    double res = temp/2;
    if (res >= a) {
        printf("%.9f", res);
    }
    else {
        double c = a;
        printf("%.9f", c);
    }
    return 0;
}
