#include <iostream>
#include <string>

using namespace std;

int main() {
    string num;
    getline(cin, num);
    int l,count;
    l = num.size();
    count = 0;
    for (int i = 0; i < l; ++i) {
        if (num.at(i) =='4' || num.at(i) == '7') {
            ++count;
        }
    }
    if (count == 4 || count ==7) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}
