#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string line;
    int l;
    scanf("%d", &l);
    cin.ignore(10000, '\n');
    int alpha[26];
    fill(alpha, alpha + 26, 0);
    getline(cin, line);
    for (int i = 0; i < l; ++i) {
        int a = tolower(line.at(i)) - 'a';
        alpha[a] = 1;
    }
    int check = 1;
    for (int i = 0; i < 26; ++i) {
        if (alpha[i] == 0) {
            check = 0;
        }
    }
    if (check == 1) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}
