#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,v,x;
    cin >> n >> v;
    vector<int> sellers;
    int count = 0;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        int arr[x];
        for (int j = 0; j < x; ++j) {
            cin >> arr[j];
        }
        for (int j = 0; j < x; ++j) {
            if (arr[j] < v) {
                count++;
                sellers.push_back(i+1);
                break;
            }
        }
    }
    cout << count << endl;
    if (count > 0) {
        for (int j = 0; j < count-1; ++j) {
            cout << sellers.at(j) << " ";
        }
        cout << sellers.at(count - 1) << endl;
    }
    else {
        cout << endl;
    }
    return 0;
}
