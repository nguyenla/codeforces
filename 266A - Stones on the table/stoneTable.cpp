#include <iostream>
#include <string>

using namespace std;

int main() {
    string line;
    char cur;
    int count = 0;
    int x = 0;
    int l;
    scanf("%d",&l);
    cin.ignore(10000,'\n');
    getline(cin, line);
    cur = line.at(0);
    for (int i=0;i<l;++i) {
        if (line.at(i) == cur) {
            count++;
        }
        else {
            x+=count-1;
            count = 1;
            cur = line.at(i);
        }
    }
    x+=count-1;
    printf("%d",x);
    return 0;
}
