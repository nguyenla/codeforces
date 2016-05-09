#include <iostream>
#include <string>

using namespace std;

int main() {
    string line;
    getline(cin, line);
    int l = line.size();
    printf("%c",toupper(line.at(0)));
    for (int i = 1;i<l;++i) {
        printf("%c", line.at(i));
    }
    return 0;
}
