#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    int l = s1.size();
    for (int i = 0; i < l; ++i) {
        if (s1.at(i)!= s2.at(i)) {
            printf("1");
        }
        else {
            printf("0");
        }
    }
    return 0;
}
