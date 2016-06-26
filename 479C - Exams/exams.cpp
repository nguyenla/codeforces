#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare_pairs(pair<int,int> a, pair<int, int> b) {
    if (a.first < b.first) {
        return true;
    }
    else if (a.first > b.first) {
        return false;
    }
    else {
        return a.second < b.second;
    }
}

int main() {
    int n;
    cin >> n;
    vector< pair<int,int> > exam;
    int a,b;
    for (int i = 0; i < n ; ++i) {
        cin >> a >> b;
        exam.push_back(pair<int,int>(a,b));
    }
    sort(exam.begin(), exam.end(), compare_pairs);
    int cur = exam.at(0).second;
    for (int i = 0; i < n; ++i) {
        if (cur <= exam.at(i).second) {
            cur = exam.at(i).second;
        }
        else {
            cur = exam.at(i).first;
        }
    }
    cout << cur << endl;
    return 0;
}
