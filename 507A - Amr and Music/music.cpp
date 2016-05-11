#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int,int> x, pair<int,int> y) {
    return (x.first < y.first);
}

int main() {
    int n,k;
    cin >> n >> k;
    int x;
    vector<pair<int,int> > array;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        pair<int,int> y(x,i);
        array.push_back(y);
    }

    sort(array.begin(), array.end(), compare);
    int i = -1;
    int days = 0;
    while (i < n-1 && days < k && days +array.at(i+1).first <=k) {
        i++;
        days += array.at(i).first;
    }
    cout << i+1 << endl;
    for (int j = 0; j <=i; ++j) {
        cout << array.at(j).second +1 << " ";
    }
    cout << endl;

    return 0;
}
