#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    string name;
    getline(cin, name);
    int l = name.size();
    int cha[l];
    for (int i = 0; i<l;++i) {
        cha[i] = name.at(i)-'a';
    }
    vector<int> array (cha,cha+l);
    sort(array.begin(), array.end());
    int cur = array.at(0);
    int count = 1;
    for (int i = 1; i<l;++i) {
        if (array.at(i) != cur) {
            ++count;
            cur = array.at(i);
        }
        else {
            cur = array.at(i);
        }
    }
    if (count %2 == 0) {
        printf("CHAT WITH HER!");
    }
    else {
        printf("IGNORE HIM!");
    }

    return 0;
}
