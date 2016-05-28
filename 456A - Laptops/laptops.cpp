#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int compare(pair<int,int> a, pair<int,int> b) {
    return a.first < b.first;
}

int main() {
    int n,a,b;
    cin >> n;
    vector<pair<int,int> > v;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        v.push_back(pair<int,int> (a,b));
    }
    sort(v.begin(), v.end(),compare);
    int check = 1;
    for (int i = 0; i < n-1; ++i) {
        if (v.at(i).first < v.at(i+1).first && v.at(i).second > v.at(i+1).second) {
            check = 0;
            break;
        }
    }

    if (!check) {
        cout << "Happy Alex" << endl;
    }
    else {
        cout << "Poor Alex" << endl;
    }

    return 0;
}
