#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,x,y;
    scanf("%d", &n);
    vector<pair<int,int> > data;
    for (int i =0; i<n; ++i) {
        scanf("%d", &x);
        scanf("%d", &y);
        data.push_back(pair<int,int>(x,y));
    }
    int c,d,sum;
    c = 0;
    sum = 0;
    while (1) {
        d = c;
        int meat = 0;
        while (d < n && data.at(c).second <= data.at(d).second) {
            meat+= data.at(d).first;
            d++;
        }
        sum+= meat*data.at(c).second;
        c = d;
        if (d == n) {
            break;
        }
    }
    printf("%d", sum);

    return 0;
}
