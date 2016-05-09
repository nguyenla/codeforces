#include <iostream>
#include <string>
using namespace std;

int main() {
    int x,l;
    string line;
    char word[100];
    scanf("%d", &x);
    cin.ignore(10000, '\n');
    for (int i = 0; i<x; ++i) {
        getline(cin,line);
        l = line.size();
        if (l > 10) {
            printf("%s%d%s\n", line.substr(0,1).c_str(), l-2, line.substr(l-1,1).c_str());
        }
        else {
            printf("%s\n", line.c_str());
        }
    }
    return 0;
}
