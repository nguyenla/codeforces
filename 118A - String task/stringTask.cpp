#include <iostream>
#include <string>

using namespace std;

int main() {
    string s,res;
    int l;
    res = "";
    getline(cin, s);
    l = s.size();
    for (int i = 0; i < l; ++i) {
        if (toupper(s[i]) != 'A' && toupper(s[i]) != 'E' && toupper(s[i]) != 'I' && toupper(s[i]) != 'O' && toupper(s[i]) != 'U' && toupper(s[i]) != 'Y') {
            res = res + '.';
            res += tolower(s[i]);
        }
    }
        printf("%s\n",res.c_str());
    return 0;
}
