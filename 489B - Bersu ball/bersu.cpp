#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int b,g,x;
    cin >> b;
    vector<int> boys, girls;
    for (int i = 0; i < b; ++i) {
        scanf("%d", &x);
        boys.push_back(x);
    }
    cin >> g;
    for (int i = 0; i < g; ++i) {
        scanf("%d", &x);
        girls.push_back(x);
    }
    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());

    int m = 0;
    int n = 0;
    int match = 0;
    while (m < b && n < g) {
        if ((boys.at(m) - 1 <= girls.at(n)) && (boys.at(m)+1 >= girls.at(n))) {
                match++;
                m++;
                n++;
        }
        else if (boys.at(m) + 1 < girls.at(n)) {
            m++;
        }
        else if (boys.at(m) - 1 > girls.at(n)) {
            n++;
        }
    }
    cout << match << endl;
    return 0;
}
