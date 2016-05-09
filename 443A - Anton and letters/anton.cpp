#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string line;
    getline(cin,line);
    int l = line.size();
    if (l ==2) {
        printf("0");
    }
    else {
    int words[l/3];
    for (int i = 1; i<l; i+=3) {
        words[i/3] = line.at(i)-'a';
    }
    vector<int> v(words,words + (l/3));
    sort(v.begin(), v.end());
    int count = 1;
    int cur = v.at(0);
    for (int i = 1; i < l/3; ++i) {
        if (v.at(i) != cur) {
            ++count;
        }
        cur = v.at(i);
    }
    printf("%d",count);
    }
    return 0;
}
