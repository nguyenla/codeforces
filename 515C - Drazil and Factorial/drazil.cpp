#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long factorial(long long x) {
    if (x == 1) {
        return 1;
    }
    else {
        return x* factorial(x-1);
    }
}

int main() {
    int n;
    cin >> n;
    cin.ignore(10000, '\n');
    string line;
    getline(cin, line);
    int i = 0;
    while (line.at(i) == '0') {
        ++i;
    }
    vector<int> v;
    while (i < n) {
        int x = line.at(i) - '0';
        if (x == 9) {
            v.push_back(3);
            v.push_back(3);
            v.push_back(2);
            v.push_back(7);
        }
        else if (x == 8) {
            v.push_back(2);
            v.push_back(2);
            v.push_back(2);
            v.push_back(7);
        }
        else if (x == 7) {
            v.push_back(7);
        }
        else if (x == 6) {
            v.push_back(3);
            v.push_back(5);
        }
        else if (x == 5) {
            v.push_back(5);
        }
        else if (x == 4) {
            v.push_back(2);
            v.push_back(2);
            v.push_back(3);
        }
        else if (x == 3) {
            v.push_back(3);
        }
        else if (x == 2) {
            v.push_back(2);
        }

        ++i;
    }

    int l = v.size();
    sort(v.begin(), v.end());
    for (int i = l-1; i >= 0; --i) {
        cout << v.at(i);
    }
    cout << endl;
    return 0;
}
