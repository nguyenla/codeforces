#include <iostream>
#include <string>

using namespace std;

int main() {
    string prog;
    char x;
    getline(cin, prog);
    int l = prog.size();
    for (int i = 0; i < l; ++i) {
        x = prog.at(i);
        if (x == 'Q' || x == 'H' || x == '9') {
            printf("YES");
            break;
        }
        else if (i == l-1) {
            printf("NO");
        }
    }
    return 0;
}
