#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1,s2;
    char c1,c2;
    getline(cin,s1);
//    cin.ignore(1000000,'\n');
    getline(cin,s2);
    int l = s1.size();
    for (int i = 0;i<l;++i) {
        c1 = tolower(s1.at(i));
        c2 = tolower(s2.at(i));
        if (c1 < c2) {
            printf("-1");
            break;
        }
        else if (c2 < c1) {
            printf("1");
            break;
        }
        else if (i == l-1) {
            printf("0");
        }
    }
    return 0;
}
