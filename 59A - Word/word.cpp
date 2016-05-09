#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string word;
    getline(cin, word);
    string low = "abcdefghijklmnopqrstuvwxyz";
    string up = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int l = word.size();
    int nl,nu;
    nl = 0;
    nu = 0;
    for (int i = 0; i < l; ++i) {
        if (low.find(word.at(i)) != -1) {
            nl++;
        }
        else {
            nu++;
        }
    }

    if (nu > nl) {
        for (int i = 0; i < l; ++i) {
            printf("%c", toupper(word.at(i)));
        }
    }
    else {
        for (int i = 0; i < l; ++i) {
            printf("%c", tolower(word.at(i)));
        }
    }

    return 0;
}
