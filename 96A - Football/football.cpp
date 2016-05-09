#include <iostream>
#include <string>

using namespace std;

int main() {
    string line;
    int x = 0;
    int count = 0;
    char cur;
    getline(cin,line);
    int l = line.size();
    cur = line.at(0);
    for (int i =0;i<l;++i) {
        if (line.at(i) == cur) {
            count++;
            if (count >= 7) {
                x = 1;
            }
        }
        else {
            count = 1;
            cur = line.at(i);
        }
    }
    if (x) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}
