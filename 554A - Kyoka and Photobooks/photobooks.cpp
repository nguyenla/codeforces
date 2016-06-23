#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string x;
    getline(cin, x);
    int l = x.size();
    for (int i = 0; i < l; ++i) {
    }
    int count = 26*(l+1) - l;
    cout << count << endl;
    return 0;
}
