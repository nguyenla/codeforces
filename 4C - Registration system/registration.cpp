#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(10000,'\n');
    string name;
    map<string, int> data;
    for (int i = 0; i < n;++i) {
        getline(cin, name);
        if (!data[name]) {
            data[name] = 1;
            cout << "OK" << endl;
        }
        else {
            cout << name << data[name] << endl;
            data[name]++;
        }
    }
    return 0;
}
