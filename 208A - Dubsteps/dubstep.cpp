#include <iostream>
#include <string>

using namespace std;

int main() {
    string line;
    int x;
    getline(cin, line);
    x = line.find("WUB");
//    printf("%d",x);
    while (x==0) {
        line.erase(x,3);
        x = line.find("WUB");
    }

    while (x!= -1) {
            line.replace(x,3," ");
            x = line.find("WUB");
        }

    int l = line.size();
    int c = 0;
    for (int i = l-1; i >=0; --i) {
        if (line.at(i) != ' ') {
            break;
        }
        else {
            line.erase(i,1);
        }
    }

    l = line.size();
    for (int i = l-1; i >=0; --i) {
        if (line.at(i) != ' ') {
            c = 0;
        } 
        else {
            ++c;
            if (c > 1) {
                line.erase(i,1);
                --c;
            }
        }
    }

    printf("%s", line.c_str());
    return 0;
}
