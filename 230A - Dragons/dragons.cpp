#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool check(pair<int,int> v1, pair<int, int> v2) {
    if (v1.first < v2.first) {
        return true;
    }
    else if (v1.first == v2.first && v1.second < v2.second) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int s,n,x,y,c;
    scanf("%d", &s);
    scanf("%d", &n);
    c = 1;
    vector<pair<int,int> > dragons;
    for (int i = 0; i<n; ++i) {
        scanf("%d", &x);
        scanf("%d", &y);
        dragons.push_back(pair<int,int>(x,y));
    }
    sort(dragons.begin(), dragons.end(),check);
    for (int i = 0; i < n; ++i) {
        if (s > dragons.at(i).first) {
            s+= dragons.at(i).second;
        }
        else {
            c = 0;
            break;
        }
    }

    if (c == 0) {
        printf("NO");
    }
    else {
        printf("YES");
    }
    return 0;
}
